/********************************************************************************
** Form generated from reading UI file 'myserial.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSERIAL_H
#define UI_MYSERIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_myserial
{
public:
    QPushButton *pushButton_back;
    QLabel *label_Serial_baud;
    QPushButton *pushButton_Send_Serial;
    QComboBox *comboBox_Parity;
    QComboBox *comboBox;
    QLabel *label_Serial_data;
    QComboBox *comboBox_data;
    QLabel *label_Serial_StopBits;
    QLabel *label_Serial_Recv;
    QLabel *label_Serial_Parity;
    QComboBox *comboBox_baud;
    QLabel *label_Serial_com;
    QLabel *label_Serial_Send;
    QTextEdit *textEdit_Send_Serial;
    QLabel *label_Serial_State;
    QPushButton *pushButton_Clear_Serial;
    QComboBox *comboBox_StopBits;
    QLabel *label_Serial;
    QTextEdit *textEdit_Recv_Serial;
    QPushButton *pushButton_open;
    QPushButton *pushButton_close;
    QLabel *label_Serial_State_2;
    QPushButton *pushButton_Send_Serial_clear;

    void setupUi(QDialog *myserial)
    {
        if (myserial->objectName().isEmpty())
            myserial->setObjectName(QStringLiteral("myserial"));
        myserial->resize(800, 480);
        pushButton_back = new QPushButton(myserial);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(680, 420, 90, 50));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        pushButton_back->setFont(font);
        label_Serial_baud = new QLabel(myserial);
        label_Serial_baud->setObjectName(QStringLiteral("label_Serial_baud"));
        label_Serial_baud->setGeometry(QRect(170, 141, 61, 16));
        QFont font1;
        font1.setPointSize(8);
        label_Serial_baud->setFont(font1);
        pushButton_Send_Serial = new QPushButton(myserial);
        pushButton_Send_Serial->setObjectName(QStringLiteral("pushButton_Send_Serial"));
        pushButton_Send_Serial->setGeometry(QRect(340, 80, 71, 31));
        comboBox_Parity = new QComboBox(myserial);
        comboBox_Parity->setObjectName(QStringLiteral("comboBox_Parity"));
        comboBox_Parity->setGeometry(QRect(42, 223, 101, 20));
        comboBox_Parity->setFont(font1);
        comboBox = new QComboBox(myserial);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(42, 100, 101, 20));
        comboBox->setFont(font1);
        label_Serial_data = new QLabel(myserial);
        label_Serial_data->setObjectName(QStringLiteral("label_Serial_data"));
        label_Serial_data->setGeometry(QRect(170, 182, 51, 16));
        label_Serial_data->setFont(font1);
        comboBox_data = new QComboBox(myserial);
        comboBox_data->setObjectName(QStringLiteral("comboBox_data"));
        comboBox_data->setGeometry(QRect(42, 182, 101, 20));
        comboBox_data->setFont(font1);
        label_Serial_StopBits = new QLabel(myserial);
        label_Serial_StopBits->setObjectName(QStringLiteral("label_Serial_StopBits"));
        label_Serial_StopBits->setGeometry(QRect(170, 264, 51, 16));
        label_Serial_StopBits->setFont(font1);
        label_Serial_Recv = new QLabel(myserial);
        label_Serial_Recv->setObjectName(QStringLiteral("label_Serial_Recv"));
        label_Serial_Recv->setGeometry(QRect(520, 80, 81, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        label_Serial_Recv->setFont(font2);
        label_Serial_Parity = new QLabel(myserial);
        label_Serial_Parity->setObjectName(QStringLiteral("label_Serial_Parity"));
        label_Serial_Parity->setGeometry(QRect(170, 223, 51, 16));
        label_Serial_Parity->setFont(font1);
        comboBox_baud = new QComboBox(myserial);
        comboBox_baud->setObjectName(QStringLiteral("comboBox_baud"));
        comboBox_baud->setGeometry(QRect(42, 141, 101, 20));
        comboBox_baud->setFont(font1);
        label_Serial_com = new QLabel(myserial);
        label_Serial_com->setObjectName(QStringLiteral("label_Serial_com"));
        label_Serial_com->setGeometry(QRect(170, 100, 61, 16));
        label_Serial_com->setFont(font1);
        label_Serial_Send = new QLabel(myserial);
        label_Serial_Send->setObjectName(QStringLiteral("label_Serial_Send"));
        label_Serial_Send->setGeometry(QRect(250, 80, 81, 31));
        label_Serial_Send->setFont(font2);
        textEdit_Send_Serial = new QTextEdit(myserial);
        textEdit_Send_Serial->setObjectName(QStringLiteral("textEdit_Send_Serial"));
        textEdit_Send_Serial->setGeometry(QRect(250, 120, 241, 161));
        QFont font3;
        font3.setPointSize(6);
        textEdit_Send_Serial->setFont(font3);
        label_Serial_State = new QLabel(myserial);
        label_Serial_State->setObjectName(QStringLiteral("label_Serial_State"));
        label_Serial_State->setGeometry(QRect(250, 310, 221, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("Sans"));
        font4.setPointSize(15);
        font4.setBold(true);
        font4.setWeight(75);
        label_Serial_State->setFont(font4);
        pushButton_Clear_Serial = new QPushButton(myserial);
        pushButton_Clear_Serial->setObjectName(QStringLiteral("pushButton_Clear_Serial"));
        pushButton_Clear_Serial->setGeometry(QRect(700, 80, 71, 31));
        comboBox_StopBits = new QComboBox(myserial);
        comboBox_StopBits->setObjectName(QStringLiteral("comboBox_StopBits"));
        comboBox_StopBits->setGeometry(QRect(42, 264, 101, 20));
        comboBox_StopBits->setFont(font1);
        label_Serial = new QLabel(myserial);
        label_Serial->setObjectName(QStringLiteral("label_Serial"));
        label_Serial->setGeometry(QRect(250, 360, 151, 21));
        textEdit_Recv_Serial = new QTextEdit(myserial);
        textEdit_Recv_Serial->setObjectName(QStringLiteral("textEdit_Recv_Serial"));
        textEdit_Recv_Serial->setGeometry(QRect(520, 120, 251, 161));
        textEdit_Recv_Serial->setFont(font3);
        pushButton_open = new QPushButton(myserial);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));
        pushButton_open->setGeometry(QRect(40, 320, 99, 40));
        pushButton_close = new QPushButton(myserial);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(40, 370, 99, 40));
        label_Serial_State_2 = new QLabel(myserial);
        label_Serial_State_2->setObjectName(QStringLiteral("label_Serial_State_2"));
        label_Serial_State_2->setGeometry(QRect(40, 50, 161, 31));
        label_Serial_State_2->setFont(font2);
        pushButton_Send_Serial_clear = new QPushButton(myserial);
        pushButton_Send_Serial_clear->setObjectName(QStringLiteral("pushButton_Send_Serial_clear"));
        pushButton_Send_Serial_clear->setGeometry(QRect(420, 80, 71, 31));

        retranslateUi(myserial);

        QMetaObject::connectSlotsByName(myserial);
    } // setupUi

    void retranslateUi(QDialog *myserial)
    {
        myserial->setWindowTitle(QApplication::translate("myserial", "Dialog", 0));
        pushButton_back->setText(QApplication::translate("myserial", "\350\277\224\345\233\236", 0));
        label_Serial_baud->setText(QApplication::translate("myserial", "\346\263\242\347\211\271\347\216\207", 0));
        pushButton_Send_Serial->setText(QApplication::translate("myserial", "\345\217\221\351\200\201", 0));
        label_Serial_data->setText(QApplication::translate("myserial", "\346\225\260\346\215\256\344\275\215", 0));
        label_Serial_StopBits->setText(QApplication::translate("myserial", "\345\201\234\346\255\242\344\275\215", 0));
        label_Serial_Recv->setText(QApplication::translate("myserial", "\346\216\245\346\224\266\345\214\272", 0));
        label_Serial_Parity->setText(QApplication::translate("myserial", "\346\240\241\351\252\214\344\275\215", 0));
        label_Serial_com->setText(QApplication::translate("myserial", "COM\345\217\243", 0));
        label_Serial_Send->setText(QApplication::translate("myserial", "\345\217\221\351\200\201\345\214\272", 0));
        label_Serial_State->setText(QApplication::translate("myserial", "\344\270\262\345\217\243\350\277\236\346\216\245\346\203\205\345\206\265\357\274\232", 0));
        pushButton_Clear_Serial->setText(QApplication::translate("myserial", "\346\270\205\351\231\244", 0));
        label_Serial->setText(QApplication::translate("myserial", "label_Serial", 0));
        pushButton_open->setText(QApplication::translate("myserial", "open", 0));
        pushButton_close->setText(QApplication::translate("myserial", "close", 0));
        label_Serial_State_2->setText(QApplication::translate("myserial", "\344\270\262\345\217\243\350\256\276\347\275\256:", 0));
        pushButton_Send_Serial_clear->setText(QApplication::translate("myserial", "\346\270\205\351\231\244", 0));
    } // retranslateUi

};

namespace Ui {
    class myserial: public Ui_myserial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSERIAL_H
