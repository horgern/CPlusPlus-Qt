#ifndef MYSERIAL_H
#define MYSERIAL_H

#include <QDialog>
#include <QSerialPort>
#include <QSerialPortInfo>



namespace Ui {
class myserial;
}

class myserial : public QDialog
{
    Q_OBJECT

public:
    explicit myserial(QWidget *parent = 0);
    QSerialPort serial;//串口实例
    void initSeialPort();//初始化串口函数
    void InitSeialPortInMythread();
    ~myserial();

private slots:
    void on_pushButton_back_clicked();
    void serialRead();

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_pushButton_Send_Serial_clicked();

    void on_pushButton_Clear_Serial_clicked();

    void on_comboBox_baud_currentIndexChanged(const QString &arg1);

    void on_comboBox_data_currentIndexChanged(const QString &arg1);

    void on_comboBox_Parity_currentIndexChanged(const QString &arg1);

    void on_comboBox_StopBits_currentIndexChanged(const QString &arg1);

    void on_pushButton_open_clicked();

    void on_pushButton_close_clicked();

    void on_pushButton_Send_Serial_clear_clicked();
    void SendMsgToMachine(QString str);

private:
    Ui::myserial *ui;


};

#endif // MYSERIAL_H
