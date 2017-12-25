#ifndef SETTING_H
#define SETTING_H

#include <QDialog>
#include <QTcpSocket>
#include "mythread.h"
#include <QAbstractSocket>
//#include <QIODevice>
namespace Ui {
class setting;
}

class setting : public QDialog
{
    Q_OBJECT

public:
    explicit setting(QWidget *parent = 0);
    ~setting();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_Ent_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_Point_clicked();

    void on_pushButton_rod_clicked();

    void on_pushButton_Space_clicked();

    void on_pushButton_Del_clicked();

    void on_pushButton_connect_clicked();

    void on_pushButton_send_clicked();

    void on_pushButton_recv_clicked();

    void slot_get_network();
    void readMessageFromTCPServer();

    void onDisConnect();
    void onConnect();
    void onErro(QAbstractSocket::SocketError);

private:
    Ui::setting *ui;
    int flag_IP_Port;
    QTcpSocket *tcpClient;
    mythread *pthread;
    int count;

};

#endif // SETTING_H
