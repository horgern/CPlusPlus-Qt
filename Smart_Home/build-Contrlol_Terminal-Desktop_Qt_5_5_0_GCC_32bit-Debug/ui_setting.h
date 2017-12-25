/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_setting
{
public:
    QLineEdit *lineEdit_Port;
    QLineEdit *lineEdit_IP;
    QLabel *label_IP;
    QLabel *label_Port;
    QPushButton *pushButton;
    QPushButton *pushButton_connect;
    QTextEdit *textEdit_recv_message;
    QLineEdit *lineEdit_senf_message;
    QPushButton *pushButton_send;
    QPushButton *pushButton_recv;
    QLabel *label_Serial_Send;
    QLabel *label_Serial_Recv;
    QPushButton *pushButton_1;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_0;
    QPushButton *pushButton_Point;
    QPushButton *pushButton_rod;
    QPushButton *pushButton_Ent;
    QPushButton *pushButton_Space;
    QPushButton *pushButton_Del;
    QLabel *label_ConnectStatus;

    void setupUi(QDialog *setting)
    {
        if (setting->objectName().isEmpty())
            setting->setObjectName(QStringLiteral("setting"));
        setting->resize(800, 480);
        lineEdit_Port = new QLineEdit(setting);
        lineEdit_Port->setObjectName(QStringLiteral("lineEdit_Port"));
        lineEdit_Port->setGeometry(QRect(260, 50, 71, 41));
        lineEdit_IP = new QLineEdit(setting);
        lineEdit_IP->setObjectName(QStringLiteral("lineEdit_IP"));
        lineEdit_IP->setGeometry(QRect(50, 50, 181, 41));
        label_IP = new QLabel(setting);
        label_IP->setObjectName(QStringLiteral("label_IP"));
        label_IP->setGeometry(QRect(50, 10, 41, 31));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label_IP->setFont(font);
        label_Port = new QLabel(setting);
        label_Port->setObjectName(QStringLiteral("label_Port"));
        label_Port->setGeometry(QRect(260, 10, 71, 31));
        label_Port->setFont(font);
        pushButton = new QPushButton(setting);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(700, 410, 90, 50));
        pushButton->setFont(font);
        pushButton_connect = new QPushButton(setting);
        pushButton_connect->setObjectName(QStringLiteral("pushButton_connect"));
        pushButton_connect->setGeometry(QRect(50, 404, 285, 50));
        pushButton_connect->setFont(font);
        textEdit_recv_message = new QTextEdit(setting);
        textEdit_recv_message->setObjectName(QStringLiteral("textEdit_recv_message"));
        textEdit_recv_message->setGeometry(QRect(400, 280, 181, 171));
        lineEdit_senf_message = new QLineEdit(setting);
        lineEdit_senf_message->setObjectName(QStringLiteral("lineEdit_senf_message"));
        lineEdit_senf_message->setGeometry(QRect(400, 70, 181, 141));
        pushButton_send = new QPushButton(setting);
        pushButton_send->setObjectName(QStringLiteral("pushButton_send"));
        pushButton_send->setGeometry(QRect(600, 70, 51, 31));
        pushButton_recv = new QPushButton(setting);
        pushButton_recv->setObjectName(QStringLiteral("pushButton_recv"));
        pushButton_recv->setGeometry(QRect(600, 280, 51, 31));
        label_Serial_Send = new QLabel(setting);
        label_Serial_Send->setObjectName(QStringLiteral("label_Serial_Send"));
        label_Serial_Send->setGeometry(QRect(400, 30, 81, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_Serial_Send->setFont(font1);
        label_Serial_Recv = new QLabel(setting);
        label_Serial_Recv->setObjectName(QStringLiteral("label_Serial_Recv"));
        label_Serial_Recv->setGeometry(QRect(410, 240, 81, 31));
        label_Serial_Recv->setFont(font1);
        pushButton_1 = new QPushButton(setting);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setGeometry(QRect(50, 110, 85, 45));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(12);
        pushButton_1->setFont(font2);
        pushButton_3 = new QPushButton(setting);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(250, 110, 85, 45));
        pushButton_3->setFont(font2);
        pushButton_2 = new QPushButton(setting);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 110, 85, 45));
        pushButton_2->setFont(font2);
        pushButton_4 = new QPushButton(setting);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(50, 170, 85, 45));
        pushButton_4->setFont(font2);
        pushButton_5 = new QPushButton(setting);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(150, 170, 85, 45));
        pushButton_5->setFont(font2);
        pushButton_8 = new QPushButton(setting);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(150, 230, 85, 45));
        pushButton_8->setFont(font2);
        pushButton_6 = new QPushButton(setting);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(250, 170, 85, 45));
        pushButton_6->setFont(font2);
        pushButton_7 = new QPushButton(setting);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(50, 230, 85, 45));
        pushButton_7->setFont(font2);
        pushButton_9 = new QPushButton(setting);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(250, 230, 85, 45));
        pushButton_9->setFont(font2);
        pushButton_0 = new QPushButton(setting);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));
        pushButton_0->setGeometry(QRect(50, 290, 85, 45));
        pushButton_0->setFont(font2);
        pushButton_Point = new QPushButton(setting);
        pushButton_Point->setObjectName(QStringLiteral("pushButton_Point"));
        pushButton_Point->setGeometry(QRect(150, 290, 85, 45));
        pushButton_Point->setFont(font);
        pushButton_rod = new QPushButton(setting);
        pushButton_rod->setObjectName(QStringLiteral("pushButton_rod"));
        pushButton_rod->setGeometry(QRect(250, 290, 85, 45));
        pushButton_rod->setFont(font2);
        pushButton_Ent = new QPushButton(setting);
        pushButton_Ent->setObjectName(QStringLiteral("pushButton_Ent"));
        pushButton_Ent->setGeometry(QRect(50, 350, 85, 45));
        pushButton_Ent->setFont(font2);
        pushButton_Space = new QPushButton(setting);
        pushButton_Space->setObjectName(QStringLiteral("pushButton_Space"));
        pushButton_Space->setGeometry(QRect(150, 350, 85, 45));
        pushButton_Space->setFont(font2);
        pushButton_Del = new QPushButton(setting);
        pushButton_Del->setObjectName(QStringLiteral("pushButton_Del"));
        pushButton_Del->setGeometry(QRect(250, 350, 85, 45));
        pushButton_Del->setFont(font2);
        label_ConnectStatus = new QLabel(setting);
        label_ConnectStatus->setObjectName(QStringLiteral("label_ConnectStatus"));
        label_ConnectStatus->setGeometry(QRect(640, 10, 151, 31));
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        label_ConnectStatus->setFont(font3);
        label_ConnectStatus->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        retranslateUi(setting);

        QMetaObject::connectSlotsByName(setting);
    } // setupUi

    void retranslateUi(QDialog *setting)
    {
        setting->setWindowTitle(QApplication::translate("setting", "Dialog", 0));
        label_IP->setText(QApplication::translate("setting", "IP\357\274\232", 0));
        label_Port->setText(QApplication::translate("setting", "Port\357\274\232", 0));
        pushButton->setText(QApplication::translate("setting", "\350\277\224\345\233\236", 0));
        pushButton_connect->setText(QApplication::translate("setting", "\350\277\236\346\216\245", 0));
        pushButton_send->setText(QApplication::translate("setting", "\345\217\221\351\200\201", 0));
        pushButton_recv->setText(QApplication::translate("setting", "\346\270\205\351\231\244", 0));
        label_Serial_Send->setText(QApplication::translate("setting", "\345\217\221\351\200\201\345\214\272", 0));
        label_Serial_Recv->setText(QApplication::translate("setting", "\346\216\245\346\224\266\345\214\272", 0));
        pushButton_1->setText(QApplication::translate("setting", "1", 0));
        pushButton_3->setText(QApplication::translate("setting", "3", 0));
        pushButton_2->setText(QApplication::translate("setting", "2", 0));
        pushButton_4->setText(QApplication::translate("setting", "4", 0));
        pushButton_5->setText(QApplication::translate("setting", "5", 0));
        pushButton_8->setText(QApplication::translate("setting", "8", 0));
        pushButton_6->setText(QApplication::translate("setting", "6", 0));
        pushButton_7->setText(QApplication::translate("setting", "7", 0));
        pushButton_9->setText(QApplication::translate("setting", "9", 0));
        pushButton_0->setText(QApplication::translate("setting", "0", 0));
        pushButton_Point->setText(QApplication::translate("setting", ".", 0));
        pushButton_rod->setText(QApplication::translate("setting", "-", 0));
        pushButton_Ent->setText(QApplication::translate("setting", "IP", 0));
        pushButton_Space->setText(QString());
        pushButton_Del->setText(QApplication::translate("setting", "Del", 0));
        label_ConnectStatus->setText(QApplication::translate("setting", "Connect Status", 0));
    } // retranslateUi

};

namespace Ui {
    class setting: public Ui_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
