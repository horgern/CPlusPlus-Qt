#include "setting.h"
#include "ui_setting.h"
#include "setting_menu.h"
#include<QtDebug>
#include "common.h"
#include <QMetaEnum>
#include <QMetaObject>
setting::setting(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setting)
{
    ui->setupUi(this);
    QPalette palette;
       //加载背景图片
    QPixmap pix = QPixmap(":/picture/background3.jpg");
    pix = pix.scaled(QSize(size()));
    palette.setBrush(QPalette::Window,QBrush(pix));

    setPalette(palette);


    flag_IP_Port = true;
    tcpClient = new QTcpSocket(this);
    connect(tcpClient, SIGNAL(connected()), this, SLOT(onConnect()));
    connect(tcpClient, SIGNAL(disconnected()), this, SLOT(onDisConnect()));
    connect(tcpClient, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(onErro(QAbstractSocket::SocketError)));
    pthread = new mythread(this);
    connect(pthread,SIGNAL(sig_get_network()),this,SLOT(slot_get_network()));
    count=0;
    pthread->start();


}

setting::~setting()
{
    delete ui;
}

void setting::on_pushButton_clicked()
{
    //disconnect(pthread,SIGNAL(sig_get_network()),this,SLOT(slot_get_network()));

    this->close();
}

void setting::on_pushButton_1_clicked()
{
   if(ui->lineEdit_IP->isModified()==false)
       ui->lineEdit_IP->setText(ui->lineEdit_IP->text()+'1');
   else
       ui->lineEdit_Port->setText(ui->lineEdit_Port->text()+'1');
   //qDebug()<<ui->lineEdit_IP->text()+'1';
}

void setting::on_pushButton_Ent_clicked()
{
    if(flag_IP_Port == true)
    {
        ui->lineEdit_IP->setModified(true);
        ui->lineEdit_Port->setModified(false);
        ui->pushButton_Ent->setText("Port");
    }
    else
    {
        ui->lineEdit_IP->setModified(false);
        ui->lineEdit_Port->setModified(true);
        ui->pushButton_Ent->setText("IP");
    }
    flag_IP_Port = !flag_IP_Port;
}

void setting::on_pushButton_2_clicked()
{
    if(ui->lineEdit_IP->isModified()==false)
        ui->lineEdit_IP->setText(ui->lineEdit_IP->text()+'2');
    else
        ui->lineEdit_Port->setText(ui->lineEdit_Port->text()+'2');
}

void setting::on_pushButton_3_clicked()
{
    if(ui->lineEdit_IP->isModified()==false)
        ui->lineEdit_IP->setText(ui->lineEdit_IP->text()+'3');
    else
        ui->lineEdit_Port->setText(ui->lineEdit_Port->text()+'3');
}

void setting::on_pushButton_4_clicked()
{
    if(ui->lineEdit_IP->isModified()==false)
        ui->lineEdit_IP->setText(ui->lineEdit_IP->text()+'4');
    else
        ui->lineEdit_Port->setText(ui->lineEdit_Port->text()+'4');
}

void setting::on_pushButton_5_clicked()
{
    if(ui->lineEdit_IP->isModified()==false)
        ui->lineEdit_IP->setText(ui->lineEdit_IP->text()+'5');
    else
        ui->lineEdit_Port->setText(ui->lineEdit_Port->text()+'5');
}

void setting::on_pushButton_6_clicked()
{
    if(ui->lineEdit_IP->isModified()==false)
        ui->lineEdit_IP->setText(ui->lineEdit_IP->text()+'6');
    else
        ui->lineEdit_Port->setText(ui->lineEdit_Port->text()+'6');
}

void setting::on_pushButton_7_clicked()
{
    if(ui->lineEdit_IP->isModified()==false)
        ui->lineEdit_IP->setText(ui->lineEdit_IP->text()+'7');
    else
        ui->lineEdit_Port->setText(ui->lineEdit_Port->text()+'7');
}

void setting::on_pushButton_8_clicked()
{
    if(ui->lineEdit_IP->isModified()==false)
        ui->lineEdit_IP->setText(ui->lineEdit_IP->text()+'8');
    else
        ui->lineEdit_Port->setText(ui->lineEdit_Port->text()+'8');
}

void setting::on_pushButton_9_clicked()
{
    if(ui->lineEdit_IP->isModified()==false)
        ui->lineEdit_IP->setText(ui->lineEdit_IP->text()+'9');
    else
        ui->lineEdit_Port->setText(ui->lineEdit_Port->text()+'9');
}

void setting::on_pushButton_0_clicked()
{
    if(ui->lineEdit_IP->isModified()==false)
        ui->lineEdit_IP->setText(ui->lineEdit_IP->text()+'0');
    else
        ui->lineEdit_Port->setText(ui->lineEdit_Port->text()+'0');
}

void setting::on_pushButton_Point_clicked()
{
    if(ui->lineEdit_IP->isModified()==false)
        ui->lineEdit_IP->setText(ui->lineEdit_IP->text()+'.');
    else
        ui->lineEdit_Port->setText(ui->lineEdit_Port->text()+'.');
}

void setting::on_pushButton_rod_clicked()
{
    if(ui->lineEdit_IP->isModified()==false)
        ui->lineEdit_IP->setText(ui->lineEdit_IP->text()+'-');
    else
        ui->lineEdit_Port->setText(ui->lineEdit_Port->text()+'-');
}

void setting::on_pushButton_Space_clicked()
{
    if(ui->lineEdit_IP->isModified()==false)
        ui->lineEdit_IP->setText(ui->lineEdit_IP->text()+' ');
    else
        ui->lineEdit_Port->setText(ui->lineEdit_Port->text()+' ');
}


void setting::on_pushButton_Del_clicked()
{
    if(ui->lineEdit_IP->isModified()==false)
        ui->lineEdit_IP->setText(ui->lineEdit_IP->text().left(ui->lineEdit_IP->text().length()-1));
    else
        ui->lineEdit_Port->setText(ui->lineEdit_Port->text().left(ui->lineEdit_Port->text().length()-1));
}

void setting::on_pushButton_connect_clicked()
{

    qDebug()<<ui->lineEdit_IP->text();
    qDebug()<<ui->lineEdit_Port->text();
    tcpClient->connectToHost(ui->lineEdit_IP->text(),ui->lineEdit_Port->text().toInt());
    connect(tcpClient,SIGNAL(readyRead()),this,SLOT(readMessageFromTCPServer()));
    //QThread::msleep(500);
    /*
    if( tcpClient->isOpen()==true)
    {
        qDebug()<<"connect success";
        ui->pushButton_connect->setEnabled(false);
    }
    if( tcpClient->isOpen()==false)
        qDebug()<<"connect failed";

    */

}

void setting::on_pushButton_send_clicked()
{
    QString strMesg= ui->lineEdit_senf_message->text();//"temp and humi";//
    tcpClient->write(strMesg.toStdString().c_str(),strlen(strMesg.toStdString().c_str())); //发送数据
}

void setting::on_pushButton_recv_clicked()
{

    ui->textEdit_recv_message->setText("");
}

void setting::slot_get_network()
{
    count++;

    if(count == 60)
    {


        if( tcpClient->isOpen()==true )
        {
            QString strMesg= common::RecvFMstr;
            tcpClient->write(strMesg.toStdString().c_str(),strlen(strMesg.toStdString().c_str())); //发送数据
            //qDebug()<<strMesg + "in network";

        }
        if( tcpClient->isOpen()==false )
        {
            //qDebug()<<"open network failed";
            ui->label_ConnectStatus->setText("Open Net Failed");
        }
        count=0;
    }


}

void setting::readMessageFromTCPServer()
{
    if(ui->textEdit_recv_message->toPlainText().size() > 100)
        ui->textEdit_recv_message->setText("");

    QByteArray qba= tcpClient->readAll(); //读取服务器发来的数据
    ui->textEdit_recv_message->setText((ui->textEdit_recv_message->toPlainText() +  qba).toStdString().c_str());

    common::RecvFromNet=qba.toStdString().c_str();
    qDebug()<<common::RecvFromNet;
}

void setting::onDisConnect()
{
    //qDebug()<<"connect failed";
    ui->label_ConnectStatus->setText("DISCONNECTED");
    common::Net_Flag = Net_DISCONNECTED;
    ui->pushButton_connect->setEnabled(true);
}

void setting::onConnect()
{
    //qDebug()<<"connect success";
    ui->label_ConnectStatus->setText("CONNECTED");
    common::Net_Flag = Net_CONNECTED;
    ui->pushButton_connect->setEnabled(false);
}

void setting::onErro(QAbstractSocket::SocketError SocketError)
{


         const QMetaObject & mo = QAbstractSocket::staticMetaObject;
         QMetaEnum me = mo.enumerator(mo.indexOfEnumerator("SocketError"));
         //qDebug()<<me.valueToKey(SocketError);
         ui->label_ConnectStatus->setText(me.valueToKey(SocketError));

}

