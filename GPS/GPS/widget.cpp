#include "widget.h"
#include "ui_widget.h"
#include "map.h"
#include "browser.h"
#include "music_player.h"
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("智能车载系统");
    setMinimumSize(800, 480);
    setMaximumSize(800, 480);
    QPalette palette;
    //加载背景图片
    QPixmap pix = QPixmap(":/image/1.jpg");
    pix = pix.scaled(QSize(size()));
    palette.setBrush(QPalette::Window,QBrush(pix));

    setPalette(palette);
    //指定控件的样式表
    ui->pushButton->setStyleSheet("QPushButton {\
                                         border: 2px solid #8f8f91;\
                                         border-radius: 12px;\
                                         background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\
                                                                           stop: 0 #f6f7fa, stop: 1 #dadbde);\
                                         min-width: 80px;\
                                     }\
                                     QPushButton:pressed {\
                                         background-color: #ff8f91;\
                                     }");
    ui->pushButton_browser->setStyleSheet("QPushButton {\
                                         border: 2px solid #8f8f91;\
                                         border-radius: 12px;\
                                         background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\
                                                                           stop: 0 #f6f7fa, stop: 1 #dadbde);\
                                         min-width: 80px;\
                                     }\
                                     QPushButton:pressed {\
                                         background-color: #ff8f91;\
                                     }");
     ui->pushButton_music_player->setStyleSheet("QPushButton {\
                                          border: 2px solid #8f8f91;\
                                          border-radius: 12px;\
                                          background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\
                                                                            stop: 0 #f6f7fa, stop: 1 #dadbde);\
                                          min-width: 80px;\
                                      }\
                                      QPushButton:pressed {\
                                          background-color: #ff8f91;\
                                      }");
}

Widget::~Widget()
{
    delete ui;

}

void Widget::on_pushButton_clicked()
{
    Map *p = new Map(this);
    int rtn = p->exec();//模态的方式显示

}



void Widget::on_pushButton_browser_clicked()
{
    browser *p = new browser(this);
    int rtn = p->exec();//模态的方式显示
}



void Widget::on_pushButton_music_player_clicked()
{
    music_player *p = new music_player(this);
    int rtn = p->exec();//模态的方式显示
}


