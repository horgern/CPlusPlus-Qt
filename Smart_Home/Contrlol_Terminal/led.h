#ifndef LED_H
#define LED_H

#include <QDialog>
#include <QIcon>
namespace Ui {
class LED;
}

class LED : public QDialog
{
    Q_OBJECT

public:
    explicit LED(QWidget *parent = 0);
    ~LED();
signals:
    void UserData_SIG();

private slots:
    void on_back_clicked();

    void on_led1_clicked();


    void on_led2_clicked();

    void on_led3_clicked();

    void on_led4_clicked();


private:
    Ui::LED *ui;
    QPainter * painter;
    QIcon *picon;
    //myserial *pmyserial;
    //QSerialPort serial;//串口实例
};

#endif // LED_H
