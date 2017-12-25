#ifndef CAMERA_H
#define CAMERA_H

#include <QDialog>

#include <QFileDialog>
#include <QErrorMessage>
#include <QStatusBar>

#include<QPixmap>
#include <QImage>
#include <QPainter>
#include<Qt>
#include <QPixmapCache>
#include "mythread.h"
namespace Ui {
class camera;
}
class QCamera;
class QCameraViewfinder;
class QCameraImageCapture;

class camera : public QDialog
{
    Q_OBJECT

public:
    explicit camera(QWidget *parent = 0);
    bool is_camera_start;
    ~camera();

private slots:



    void on_buttonQuit_clicked();
    void on_buttonCapture_clicked();
    void on_buttonSave_clicked();

private:
    Ui::camera *ui;
    QCamera *pcamera;
    QCameraViewfinder *viewfinder;
    QCameraImageCapture *imageCapture;

    bool Camera_Open_Flag;
    unsigned int *fb_mem;
    struct buffer{
        void *start;
        size_t length;
    };
    struct buffer *buffers;
    int fd,cam_fd,jpg_fd;
    int ret,jpg_size;
    int x,y,i;
    char pic_name[10];
    char *jpg_mem;

    QPixmap *pPixmap;
    mythread *pthread;
    int count;
    QImage *pimage;
    int id;
protected:
    //重写定时事件处理函数
    void timerEvent(QTimerEvent *e);

};

#endif // CAMERA_H
