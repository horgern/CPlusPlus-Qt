#include "setting_menu.h"
#include "ui_setting_menu.h"
#include "setting.h"
#include "myserial.h"
#include<QtDebug>
#include<QTime>
#include <QDate>

#include "common.h"
#include <QMessageBox>
setting_menu::setting_menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setting_menu)
{
    ui->setupUi(this);

    int i=0;

    for(i=0;i<24;i++)
    {

        //qDebug()<<QString("%1").arg(i);
        ui->comboBox_hour->addItem(QString("%1").arg(i));

    }
    for(i=0;i<60;i++)
    {

        //qDebug()<<QString("%1").arg(i);
        ui->comboBox_min->addItem(QString("%1").arg(i));

    }
    for(i=0;i<60;i++)
    {

        //qDebug()<<QString("%1").arg(i);
        ui->comboBox_sec->addItem(QString("%1").arg(i));

    }


    QPalette palette;
       //加载背景图片
    QPixmap pix = QPixmap(":/picture/background3.jpg");
    pix = pix.scaled(QSize(size()));
    palette.setBrush(QPalette::Window,QBrush(pix));

    setPalette(palette);
    ui->calendarWidget->setGridVisible(true);


    ui->calendarWidget->setEnabled(false);
    ui->comboBox_hour->setEnabled(false);
    ui->comboBox_min->setEnabled(false);
    ui->comboBox_sec->setEnabled(false);
    ui->pushButton_confirm->setEnabled(false);
    ui->label_4->setVisible(false);

}

setting_menu::~setting_menu()
{
    delete ui;
}

void setting_menu::on_pushButton_network_clicked()
{


    if(common::Net_Flag == Net_CONNECTED)
    {
        qDebug()<<"the Net has been conneted and set!";
        ui->pushButton_network->setEnabled(false);
    }
    if(common::Net_Flag == Net_DISCONNECTED )
    {
        setting *p = new setting(this);
        p->exec();

    }

}

void setting_menu::on_pushButton_back_clicked()
{
    this->close();
}

void setting_menu::on_pushButton_serial_clicked()
{


   if(common::Serial_Flag == Normal_Mode)
   {
       myserial *p = new myserial(this);
       p->show();
   }
   else
   {
        qDebug()<<"the serial has been open and set!";
        ui->pushButton_serial->setEnabled(false);
   }

}

void setting_menu::on_pushButton_confirm_clicked()
{

    //ui->calendarWidget->setSelectedDate(ui->calendarWidget->selectedDate());
    QMessageBox::StandardButton rtn  = QMessageBox::information(this,"注意","你确定要修改吗？？？",
                                                                   QMessageBox::Ok | QMessageBox::Cancel,QMessageBox::Ok);


       if(rtn == QMessageBox::Ok){
           //选择的ok按钮

           //调用父界面的自定义函数

           //获取父控件的指针
           //QWidget * QWidget::parentWidget() const
           //QWidget * :返回值  就是父控件的指针
           QWidget * p = parentWidget();
           Widget * pMain = (Widget *)p;

           QString timestr = "\"" + ui->calendarWidget->selectedDate().toString(Qt::ISODate) + " "
                     + ui->comboBox_hour->currentText() + ":" + ui->comboBox_min->currentText() + ":" + ui->comboBox_sec->currentText() +"\"" ;
           QString settimestr =  "date -s " + timestr;
           ::system(settimestr.toStdString().c_str());
           qDebug()<<timestr;
           qDebug()<<settimestr;


       }
       ui->calendarWidget->setEnabled(false);
       ui->comboBox_hour->setEnabled(false);
       ui->comboBox_min->setEnabled(false);
       ui->comboBox_sec->setEnabled(false);
       ui->pushButton_confirm->setEnabled(false);
       ui->label_4->setVisible(false);
       ui->pushButton_network->setEnabled(true);
       ui->pushButton_serial->setEnabled(true);

       ui->pushButton_network->setVisible(true);
       ui->pushButton_serial->setVisible(true);

}

void setting_menu::on_pushButton_time_clicked()
{
    ui->calendarWidget->setEnabled(true);
    ui->comboBox_hour->setEnabled(true);
    ui->comboBox_min->setEnabled(true);
    ui->comboBox_sec->setEnabled(true);
    ui->pushButton_confirm->setEnabled(true);
    ui->label_4->setVisible(true);

    ui->pushButton_network->setEnabled(false);
    ui->pushButton_serial->setEnabled(false);
    ui->pushButton_network->setVisible(false);
    ui->pushButton_serial->setVisible(false);
}
