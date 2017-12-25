#include "widget.h"
#include "ui_widget.h"

#include "camera.h"
#include "setting_menu.h"
#include "house_app.h"
#include "userdata.h"
#include<QTime>
#include <QDate>
#include<QtDebug>


#include "common.h"
#include "led.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //启动定时器
   id =  startTimer(1000);//定时1s

    qDebug()<<"Welcome You!";
    t1=false;t2=false;
    common::Serial_Flag=Normal_Mode;
    common::Net_Flag = Net_DISCONNECTED;
    QPalette palette;
   //加载背景图片
   QPixmap pix = QPixmap(":/picture/background.jpg");
   pix = pix.scaled(QSize(size()));
   palette.setBrush(QPalette::Window,QBrush(pix));

   setPalette(palette);

   count=0;
   pimage = new QImage;
   bool ret = pimage->load(":/picture/background4.jpg");
   if(ret == false)
       qDebug()<<"load picture failed";
   ui->label_showPicTopic->setScaledContents(true);
   ui->label_showPicTopic->setPixmap(QPixmap::fromImage(*pimage));


   ui->label_PicCurtain->setText("窗帘已关闭");
   ui->label_showPicDoor->setText("门已锁");
   connect(this,SIGNAL(ShowWIFIPic_SIG()),this,SLOT(ShowWIFIPic_SLOT()));
}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_pushButton_6_clicked()
{
    setting_menu *p = new setting_menu(this);
    int rtn = p->exec();
}

void Widget::timerEvent(QTimerEvent *e)
{
    if(e->timerId() == id){
       //1s定时的时间到了
        //1. 获取当前系统的时间
       QTime t = QTime::currentTime();
       // 2. 转换为字符串
       QString str = t.toString("hh:mm:ss");
        //3. 显示到QLCDNumber控件
       ui->lcdNumber->display(str);

       QString date =  QDate::currentDate().toString(Qt::ISODate);
       ui->lcdNumber_date->display(date);

       count++;
       if(count == 3)
       {
           Temp = common::RecvFMstr;
           Humi = common::RecvFMstr;
           //qDebug()<<common::RecvFMstr + "in widgrt";
           //qDebug()<<Temp.remove(4,4) + "in widgrt";
           //qDebug()<<Humi.remove(0,4) + "in widgrt";
           Temp = Temp.remove(4,4);
           Humi = Humi.remove(0,4);

           ui->label_Temp->setText("温度：" + Temp + " ℃");
           ui->label_Humii->setText("湿度：" + Humi + "%");
           count=0;

       }
       emit ShowWIFIPic_SIG();


    }

}

void Widget::on_pushButton_5_clicked()
{
    camera *p = new camera(this);
    p->exec();
}

void Widget::on_pushButton_clicked()
{
    LED *pled = new LED(this);
    pled->show();
}




void Widget::on_pushButton_2_clicked()
{
    house_app *p = new house_app(this);
    p->exec();
}

void Widget::on_pushButton_4_clicked()
{
    QString str;
    t1=!t1;
    if(t1==true)
    {
        str="TD11";

        ui->label_showPicDoor->setText("门已开");
        /*
        bool ret = pimage->load(":/picture/dooron.jpg");
        if(ret == false)
            qDebug()<<"load picture failed";
        ui->label_showPicDoor->setScaledContents(true);
        ui->label_showPicDoor->setPixmap(QPixmap::fromImage(*pimage));
        */
    }
    else
    {
        str="TD10";

        ui->label_showPicDoor->setText("门已锁");
        /*
        bool ret = pimage->load(":/picture/dooroff.jpg");
        if(ret == false)
            qDebug()<<"load picture failed";
        ui->label_showPicDoor->setScaledContents(true);
        ui->label_showPicDoor->setPixmap(QPixmap::fromImage(*pimage));
        */
    }

    common::Commonstr = str;
}

void Widget::on_pushButton_3_clicked()
{
    QString str;
    t2=!t2;
    if(t2==true)
    {
        str="TC11";
        ui->label_PicCurtain->setText("窗帘已拉开");
        /*
        bool ret = pimage->load(":/picture/curtainon.jpg");
        if(ret == false)
            qDebug()<<"load picture failed";
        ui->label_PicCurtain->setScaledContents(true);
        ui->label_PicCurtain->setPixmap(QPixmap::fromImage(*pimage));
        */
    }
    else
    {
        str="TC10";
        ui->label_PicCurtain->setText("窗帘已关闭");
        /*
        bool ret = pimage->load(":/picture/curtainoff.jpg");
        if(ret == false)
            qDebug()<<"load picture failed";
        ui->label_PicCurtain->setScaledContents(true);
        ui->label_PicCurtain->setPixmap(QPixmap::fromImage(*pimage));
        */
    }
    common::Commonstr = str;
}

void Widget::ShowWIFIPic_SLOT()
{
    if(common::Net_Flag == Net_CONNECTED)
    {
        bool ret = pimage->load(":/picture/wifion.png");
        if(ret == false)
            qDebug()<<"load picture failed";
        ui->label_ShowWifi->setScaledContents(true);
        ui->label_ShowWifi->setPixmap(QPixmap::fromImage(*pimage));
    }
    if(common::Net_Flag == Net_DISCONNECTED)
    {
        bool ret = pimage->load(":/picture/wifioff.png");
        if(ret == false)
            qDebug()<<"load picture failed";
        ui->label_ShowWifi->setScaledContents(true);
        ui->label_ShowWifi->setPixmap(QPixmap::fromImage(*pimage));
    }
}

void Widget::on_pushButton_7_clicked()
{
    UserData *p = new UserData(this);
    p->exec();
}
