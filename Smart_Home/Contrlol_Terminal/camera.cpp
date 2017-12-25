#include "camera.h"
#include "ui_camera.h"
#include<QtDebug>


#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdbool.h>

#include <sys/mman.h>
#include <sys/ioctl.h>
#include <linux/videodev2.h>
#include <linux/input.h>





struct v4l2_buffer v4lbuf;
enum v4l2_buf_type vtype;
struct v4l2_requestbuffers reqbuf;

camera::camera(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::camera)
{
    ui->setupUi(this);
    is_camera_start = true;

    pPixmap = new QPixmap;
    pimage = new QImage;
    //pPainter = new QPainter;
    this->fd = ::open("/dev/fb0", O_RDWR);
    if(fd < 0)
    {
           qDebug()<<"open camera failed!";
           this->close();
    }
    // 映射显存

    fb_mem = (unsigned int*)mmap(NULL, 800*480*4, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);

    // 获取摄像头操作许可
    cam_fd = ::open("/dev/video0",O_RDWR);
    if(cam_fd < 0)
     {
        qDebug()<<" open  camera Failed !";
        this->close();
     }


    struct v4l2_format fmt;

    //获得摄像头的功能参数
    struct v4l2_capability cap;
    if (-1 == ::ioctl (cam_fd, VIDIOC_QUERYCAP, &cap))
    {
        qDebug()<<"camera  VIDIOC_QUERYCAP  Failed !";
        this->close();
    }
    ui->textEdit->append(QString("camera  VIDIOC_QUERYCAP version : %1").arg(cap.version));



    //设置摄像头的通道
    int index;
    index = 0;
    if (-1 == ::ioctl (cam_fd, VIDIOC_S_INPUT, &index)) {
        qDebug()<<"  camera  VIDIOC_S_INPUT  Failed !";
        this->close();
    }



    memset(&fmt,0,sizeof(fmt));
    fmt.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;

    //获取摄像头当前的采集格式
    if (-1 == ::ioctl (cam_fd, VIDIOC_G_FMT, &fmt))
    {
        qDebug()<<"camera  VIDIOC_G_FMT  Failed !";
        this->close();

    }
    ui->textEdit->append(QString("camera  VIDIOC_G_FMT width : %1").arg(fmt.fmt.pix.width) );
    ui->textEdit->append(QString("camera  VIDIOC_G_FMT height : %1").arg(fmt.fmt.pix.height));
    if( V4L2_PIX_FMT_JPEG == fmt.fmt.pix.pixelformat )

    ui->textEdit->append(QString("camera  VIDIOC_G_FMT pixelformat : V4L2_PIX_FMT_JPEG "));

    //配置摄像头的采集格式
    memset(&fmt,0,sizeof(fmt));
    fmt.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    fmt.fmt.pix.width = 640;
    fmt.fmt.pix.height = 480;
    fmt.fmt.pix.pixelformat = V4L2_PIX_FMT_JPEG;
    //fmt.fmt.pix.field = V4L2_FIELD_INTERLACED;

    if (-1 == ::ioctl (cam_fd, VIDIOC_S_FMT, &fmt))
    {
        qDebug()<<"camera  VIDIOC_S_FMT  Failed !";
        //返回异常
    }

    //再次获取摄像头当前的采集格式
    memset(&fmt,0,sizeof(fmt));
    fmt.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    if (-1 == ::ioctl (cam_fd, VIDIOC_G_FMT, &fmt))
    {
        qDebug()<<"final camera  VIDIOC_G_FMT  Failed !";
        //返回异常
    }

    ui->textEdit->append(QString("camera  VIDIOC_G_FMT width : %1").arg(fmt.fmt.pix.width));
    ui->textEdit->append(QString("camera  VIDIOC_G_FMT height : %1").arg(fmt.fmt.pix.height));

    if( V4L2_PIX_FMT_JPEG == fmt.fmt.pix.pixelformat )
    ui->textEdit->append(QString("camera  VIDIOC_G_FMT pixelformat : V4L2_PIX_FMT_JPEG "));




    memset (&reqbuf, 0, sizeof (reqbuf));

    reqbuf.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    reqbuf.memory = V4L2_MEMORY_MMAP;
    reqbuf.count = 4;

    //申请分配缓冲块
    if (-1 ==:: ioctl (cam_fd, VIDIOC_REQBUFS, &reqbuf)) {

        qDebug()<<"Video capturing or mmap-streaming is not supported\n";

    }

    //分配四个缓冲块内存地址
    buffers = (camera::buffer *)calloc (reqbuf.count, sizeof (*buffers));
    struct v4l2_buffer buffer;

   for (i = 0; i < reqbuf.count; i++)
   {
       memset (&buffer, 0, sizeof (buffer));
       buffer.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
       buffer.memory = V4L2_MEMORY_MMAP;
       buffer.index = i;

       if (-1 == ::ioctl (cam_fd, VIDIOC_QUERYBUF, &buffer)) {
          qDebug()<<"Video VIDIOC_QUERYBUF failed !\n";

   }

       //将对应的缓冲块映射到用户空间
       buffers[i].length = buffer.length; /* remember for munmap() */
       buffers[i].start = mmap (NULL, buffer.length,
                           PROT_READ | PROT_WRITE, /* required */
                           MAP_SHARED, /* recommended */
                           cam_fd, buffer.m.offset);


       if (buffers[i].start == MAP_FAILED) {
           qDebug()<<"Video mmap failed !\n";

       }

       //获取帧数据到缓存
       ret = ::ioctl(cam_fd , VIDIOC_QBUF, &buffer);
        qDebug()<<QString("VIDIOC_QBUF  buffer.index (%1) size  (%2)").arg(buffer.index).arg(buffer.length) ;
       if (ret < 0) {
        qDebug()<<QString("VIDIOC_QBUF (%1) failed (%2)").arg(i).arg(ret);

       }



   }



    memset(&v4lbuf,0,sizeof(v4lbuf));
    v4lbuf.type=V4L2_BUF_TYPE_VIDEO_CAPTURE;
    v4lbuf.memory=V4L2_MEMORY_MMAP;

   //开始摄像头数据采集
   vtype= V4L2_BUF_TYPE_VIDEO_CAPTURE;
   if (-1 == ::ioctl (cam_fd, VIDIOC_STREAMON, &vtype))
   {
      qDebug()<<"Video VIDIOC_STREAMON failed !\n";

   }





   count = 0;
   ui->textEdit->setFontPointSize(4);


   Camera_Open_Flag = true;
   //启动定时器
   id =  startTimer(100);//定时100ms
   QPixmapCache::setCacheLimit(1);
}

camera::~camera()
{

    delete ui;

}







void camera::on_buttonQuit_clicked()
{
    Camera_Open_Flag = false;
    ::close(jpg_fd);
    //关闭摄像头数据采集
        vtype = V4L2_BUF_TYPE_VIDEO_CAPTURE;
        if (-1 == ::ioctl (cam_fd, VIDIOC_STREAMOFF, &vtype))
        {
           qDebug()<<"Video VIDIOC_STREAMOFF failed !\n";
        }

        /* Cleanup. */
        for (i = 0; i < reqbuf.count; i++)
        munmap (buffers[i].start, buffers[i].length);

        ret = munmap(fb_mem, 800*480*4);
        if(ret == -1)
        {
            qDebug()<<"munmap  Failed !";
        }

        //释放显卡
        ret = ::close(fd);
        if(ret == -1)
        {
            qDebug()<<"close Failed !\n";
        }

        //释放摄像头
        ret = ::close(cam_fd);
        if(ret == -1)
        {
            qDebug()<<"close  camera Failed !";
        }

    this->close();
    qDebug()<<"close camera success!";
}



void camera::on_buttonCapture_clicked()
{
    ui->ImageCapture->setScaledContents(true);
    //ui->ImageCapture->setPixmap(QPixmap::fromImage(*pimage));
    ui->ImageCapture->setPixmap(*ui->label_picture->pixmap());
    QPixmapCache::clear();
}

void camera::on_buttonSave_clicked()
{
    QString fileName=QFileDialog::getSaveFileName(this, tr("save file"), QDir::homePath(), tr("jpegfile(*.jpg)"));
       if(fileName.isEmpty()) {
           qDebug()<<"save cancel";
           return;
       }
       const QPixmap* pixmap=ui->ImageCapture->pixmap();
       if(pixmap) {
           pixmap->save(fileName);
           qDebug()<<"save OK";
       }
}

void camera::timerEvent(QTimerEvent *e)
{
    if(e->timerId() == id && Camera_Open_Flag == true )
    {
        //获取帧数据缓冲块
        for(i=0;i<4;i++)
        {
            v4lbuf.index = i;

            ret = ::ioctl(cam_fd , VIDIOC_DQBUF, &v4lbuf);
            if (ret < 0)
            {
                qDebug()<<QString("VIDIOC_DQBUF (%1) failed (%2)").arg(i).arg(ret);
            }



            bool rtn = pimage->loadFromData((const uchar *)buffers[v4lbuf.index].start,buffers[v4lbuf.index].length,0);
            if(rtn == false)
                qDebug()<<"take picture failed";
            ui->label_picture->setPixmap(QPixmap::fromImage(*pimage));
            QPixmapCache::clear();

            ret = ::ioctl(cam_fd , VIDIOC_QBUF, &v4lbuf);
            if (ret < 0) {
                qDebug()<<QString("VIDIOC_QBUF (%1) failed (%2)").arg(i).arg(ret);
            }
            //else
                //qDebug()<<QString("VIDIOC_DQBUF (%1) success (%2)").arg(i).arg(ret);
        }
    }
}
