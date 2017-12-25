#include "myserial.h"
#include "ui_myserial.h"
#include<QtDebug>
#include "common.h"

#include <QApplication>
#include <Qt>
#include "widget.h"

#include "mythread.h"
myserial::myserial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myserial)
{
    ui->setupUi(this);
    initSeialPort();

    QPalette palette;
       //加载背景图片
    QPixmap pix = QPixmap(":/picture/background3.jpg");
    pix = pix.scaled(QSize(size()));
    palette.setBrush(QPalette::Window,QBrush(pix));

    setPalette(palette);


    if(serial.isOpen() == false)
    {
        ui->pushButton_close->setEnabled(false);
        ui->pushButton_Send_Serial->setEnabled(false);
        ui->pushButton_Clear_Serial->setEnabled(false);
        ui->pushButton_Send_Serial_clear->setEnabled(false);
    }
    mythread *pthread = new mythread(this);

    connect(pthread,SIGNAL(show_sig(QString)),this,SLOT(SendMsgToMachine(QString)));

    pthread->start();

}

void myserial::initSeialPort()
{

    connect(&serial,SIGNAL(readyRead()),this,SLOT(serialRead()));   //连接槽

    //获取计算机上所有串口并添加到comboBox中
    QList<QSerialPortInfo>  infos = QSerialPortInfo::availablePorts();
    if(infos.isEmpty())
    {
        ui->comboBox->addItem("无串口");
        return;
    }
    foreach (QSerialPortInfo info, infos) {
        ui->comboBox->addItem(info.portName());
        //qDebug() << info.portName();
    }
    ui->comboBox_baud->addItem("4800");
    ui->comboBox_baud->addItem("9600");
    ui->comboBox_baud->addItem("19200");
    ui->comboBox_baud->addItem("38400");
    ui->comboBox_baud->addItem("115200");


    ui->comboBox_data->addItem("5");
    ui->comboBox_data->addItem("6");
    ui->comboBox_data->addItem("7");
    ui->comboBox_data->addItem("8");

    ui->comboBox_Parity->addItem("NoParity");    //无校验
    ui->comboBox_Parity->addItem("EvenParity");  //偶校验
    ui->comboBox_Parity->addItem("OddParity");   //奇校验

    ui->comboBox_StopBits->addItem("1");
    ui->comboBox_StopBits->addItem("2");

    ui->comboBox->setCurrentIndex(1);
    ui->comboBox_baud->setCurrentIndex(1);
    ui->comboBox_data->setCurrentIndex(3);
    ui->comboBox_Parity->setCurrentIndex(0);
    ui->comboBox_StopBits->setCurrentIndex(0);


}

void myserial::InitSeialPortInMythread()
{
    connect(&serial,SIGNAL(readyRead()),this,SLOT(serialRead()));   //连接槽
    QSerialPortInfo info;
    QList<QSerialPortInfo> infos = QSerialPortInfo::availablePorts();
    int i = 0;
    foreach (info, infos) {
       if(info.portName() == "ttySAC1") break;
       i++;
    }
    if(i != infos.size ()){//can find
       //ui->label_Serial->setText("串口打开成功");

       serial.close();
       qDebug()<<info.portName();
       serial.setPort(info);
       serial.open(QIODevice::ReadWrite);          //读写打开

       serial.setBaudRate(QSerialPort::Baud9600);  //波特率
       serial.setDataBits(QSerialPort::Data8);     //数据位
       serial.setParity(QSerialPort::NoParity);    //无奇偶校验
       serial.setStopBits(QSerialPort::OneStop);   //1位停止位
       serial.setFlowControl(QSerialPort::NoFlowControl);  //无控制

    }else{
       serial.close();

       //ui->label_Serial->setText("串口打开失败");
    }
    if(serial.isOpen() ==true)
    {
        qDebug()<<"serial open success";
    }
    else
    {
        qDebug()<<"serial open failed";
    }
}

myserial::~myserial()
{

    delete ui;

}

void myserial::on_pushButton_back_clicked()
{
    //Widget *P = new Widget;
    //this->setParent(P);

    //this->setAttribute(Qt::WA_DontShowOnScreen,true);
    //this->setMinimumSize(QSize(0,0));

    //this->lower();

    //this->hide();
    //this->setVisible(false);

    this->close();

    common::Serial_Flag=Debug_Mode;

    if(serial.isOpen()==false)
    {
        qDebug()<<"serial Open() false";
    }
    else
    {
        qDebug()<<"serial Open success";
        qDebug()<<"Debug_Mode Finish";
    }

}

void myserial::serialRead()
{
    QByteArray qa = serial.readAll();

    ui->textEdit_Recv_Serial->append(qa.toStdString().c_str());
    if(ui->textEdit_Recv_Serial->toPlainText().size() > 100)
    {
        //qDebug()<<"size beyond 100";
        ui->textEdit_Recv_Serial->setText("");
    }

    common::RecvFMstr = qa.toStdString().c_str();
    qDebug()<<common::RecvFMstr + "in serial";
}

void myserial::on_comboBox_currentIndexChanged(const QString &arg1)
{
         QSerialPortInfo info;
           QList<QSerialPortInfo> infos = QSerialPortInfo::availablePorts();
           int i = 0;
           foreach (info, infos) {
               if(info.portName() == arg1) break;
               i++;
           }
           if(i != infos.size ())
               serial.setPort(info);
           else
               ui->label_Serial->setText("请检查串口");
            /*if(i != infos.size ()){//can find
               ui->label_Serial->setText("串口打开成功");
               serial.close();
               serial.setPort(info);
               serial.open(QIODevice::ReadWrite);          //读写打开

               serial.setBaudRate(QSerialPort::Baud9600);  //波特率
               serial.setDataBits(QSerialPort::Data8);     //数据位
               serial.setParity(QSerialPort::NoParity);    //无奇偶校验
               serial.setStopBits(QSerialPort::OneStop);   //1位停止位
               serial.setFlowControl(QSerialPort::NoFlowControl);  //无控制

           }else{
               serial.close();
               ui->label_Serial->setText("串口打开失败");
           }  */

}

void myserial::on_pushButton_Send_Serial_clicked()
{

    //char dat[] = {0x11,0x22,0x33,0x44,0x55};
    serial.write("Smart Home By Chz",17);

    ui->textEdit_Send_Serial->append("Smart Home By Chz");
}

void myserial::on_pushButton_Clear_Serial_clicked()
{
    ui->textEdit_Recv_Serial->setText("");
}

void myserial::on_comboBox_baud_currentIndexChanged(const QString &arg1)
{

    if(ui->comboBox_baud->currentText() == "4800")
    {
        serial.setBaudRate(QSerialPort::Baud4800);
        qDebug()<<"SetBaudRate as 4800";
    }
    if(ui->comboBox_baud->currentText() == "9600")
    {
        serial.setBaudRate(QSerialPort::Baud9600);
        qDebug()<<"SetBaudRate as 9600";
    }
    if(ui->comboBox_baud->currentText() == "19200")
    {
        serial.setBaudRate(QSerialPort::Baud19200);
        qDebug()<<"SetBaudRate as 19200";
    }
    if(ui->comboBox_baud->currentText() == "38400")
    {
        serial.setBaudRate(QSerialPort::Baud38400);
        qDebug()<<"SetBaudRate as 38400";
    }
    if(ui->comboBox_baud->currentText() == "115200")
    {
        serial.setBaudRate(QSerialPort::Baud115200);
        qDebug()<<"SetBaudRate as 115200";
    }
}

void myserial::on_comboBox_data_currentIndexChanged(const QString &arg1)
{

    if(ui->comboBox_data->currentText() == "5")
    {
        serial.setDataBits(QSerialPort::Data5);     //数据位
        qDebug()<<"setDataBits as 5";
    }
    if(ui->comboBox_data->currentText() == "6")
    {
        serial.setDataBits(QSerialPort::Data6);     //数据位
        qDebug()<<"setDataBits as 6";
    }
    if(ui->comboBox_data->currentText() == "7")
    {
        serial.setDataBits(QSerialPort::Data7);     //数据位
        qDebug()<<"setDataBits as 7";
    }
    if(ui->comboBox_data->currentText() == "8")
    {
        serial.setDataBits(QSerialPort::Data8);     //数据位
        qDebug()<<"setDataBits as 8";
    }


}

void myserial::on_comboBox_Parity_currentIndexChanged(const QString &arg1)
{
    if(ui->comboBox_Parity->currentText() == "NoParity")
    {
        serial.setParity(QSerialPort::NoParity);    //无奇偶校验
        qDebug()<<"setParity as NoParity";
    }
    if(ui->comboBox_Parity->currentText() == "EvenParity")
    {
        serial.setParity(QSerialPort::EvenParity);    //偶校验
        qDebug()<<"setParity as EvenParity";
    }
    if(ui->comboBox_Parity->currentText() == "OddParity")
    {
        serial.setParity(QSerialPort::OddParity);    //奇校验
        qDebug()<<"setParity as OddParity";
    }
}

void myserial::on_comboBox_StopBits_currentIndexChanged(const QString &arg1)
{
    if(ui->comboBox_StopBits->currentText()== "1")
    {
        serial.setStopBits(QSerialPort::OneStop);   //1位停止位
        qDebug()<<"setStopBits as OneStop";
    }
    if(ui->comboBox_StopBits->currentText()== "2")
    {
        serial.setStopBits(QSerialPort::TwoStop);   //2位停止位
        qDebug()<<"setStopBits as TwoStop";
    }
}

void myserial::on_pushButton_open_clicked()
{

       QSerialPortInfo info;
       QList<QSerialPortInfo> infos = QSerialPortInfo::availablePorts();
       int i = 0;
       foreach (info, infos) {
           if(info.portName() == ui->comboBox->currentText()) break;
           i++;
       }
       if(i != infos.size ()){//can find

           serial.close();
           serial.setPort(info);
           serial.open(QIODevice::ReadWrite);          //读写打开



           qDebug()<< ui->comboBox->currentText();
           qDebug()<< ui->comboBox_baud->currentText();
           qDebug()<< ui->comboBox_data->currentText();
           qDebug()<< ui->comboBox_Parity->currentText();
           qDebug()<< ui->comboBox_StopBits->currentText();


       }else{
           serial.close();
           ui->label_Serial->setText("串口打开失败");
       }
       if(serial.isOpen()== true)
       {
           ui->label_Serial->setText("串口打开成功");

           ui->pushButton_open->setEnabled(false);
           ui->comboBox->setEnabled(false);
           ui->comboBox_baud->setEnabled(false);
           ui->comboBox_Parity->setEnabled(false);
           ui->comboBox_data->setEnabled(false);
           ui->comboBox_StopBits->setEnabled(false);

           ui->pushButton_close->setEnabled(true);
           ui->pushButton_Send_Serial->setEnabled(true);
           ui->pushButton_Clear_Serial->setEnabled(true);
           ui->pushButton_Send_Serial_clear->setEnabled(true);
       }
       else
           ui->label_Serial->setText("COM打开失败");

}

void myserial::on_pushButton_close_clicked()
{
    if(serial.isOpen()== true)
    {
        ui->pushButton_open->setEnabled(true);
        ui->comboBox->setEnabled(true);
        ui->comboBox_baud->setEnabled(true);
        ui->comboBox_Parity->setEnabled(true);
        ui->comboBox_data->setEnabled(true);
        ui->comboBox_StopBits->setEnabled(true);

        ui->pushButton_close->setEnabled(false);
        ui->pushButton_Send_Serial->setEnabled(false);
        ui->pushButton_Clear_Serial->setEnabled(false);
        ui->pushButton_Send_Serial_clear->setEnabled(false);
        serial.close();
        ui->label_Serial->setText("串口关闭");
    }
}

void myserial::on_pushButton_Send_Serial_clear_clicked()
{
    ui->textEdit_Send_Serial->setText("");
}

void myserial::SendMsgToMachine(QString str)
{
    if(serial.isOpen()== false)
    {
        qDebug()<<"open serial failed";

    }
    //qDebug()<<"serial in test";
    if(str == "TL11")
    {
        serial.write("TL11",4);

    }
    if(str == "TL10")
    {
        serial.write("TL10",4);

    }
    if(str == "TL21")
    {
        serial.write("TL21",4);

    }
    if(str == "TL20")
    {
        serial.write("TL20",4);

    }
    if(str == "TL31")
    {
        serial.write("TL31",4);

    }
    if(str == "TL30")
    {
        serial.write("TL30",4);

    }
    if(str == "TL41")
    {
        serial.write("TL41",4);

    }
    if(str == "TL40")
    {
        serial.write("TL40",4);

    }
/////////////////////////////
    if(str == "TR11")
    {
        serial.write("TR11",4);

    }
    if(str == "TR10")
    {
        serial.write("TR10",4);

    }
    if(str == "TR21")
    {
        serial.write("TR21",4);

    }
    if(str == "TR20")
    {
        serial.write("TR20",4);

    }
 //////////////////////////////////
    if(str == "TD11")
    {
        serial.write("TD11",4);

    }
    if(str == "TD10")
    {
        serial.write("TD10",4);

    }
/////////////////////////////////////
    if(str == "TC11")
    {
        serial.write("TC11",4);

    }
    if(str == "TC10")
    {
        serial.write("TC10",4);

    }
}


