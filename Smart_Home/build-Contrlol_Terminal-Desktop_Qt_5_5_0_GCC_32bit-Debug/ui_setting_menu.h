/********************************************************************************
** Form generated from reading UI file 'setting_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_MENU_H
#define UI_SETTING_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_setting_menu
{
public:
    QPushButton *pushButton_time;
    QPushButton *pushButton_network;
    QPushButton *pushButton_back;
    QPushButton *pushButton_serial;
    QFrame *frame;
    QCalendarWidget *calendarWidget;
    QPushButton *pushButton_confirm;
    QComboBox *comboBox_hour;
    QComboBox *comboBox_min;
    QComboBox *comboBox_sec;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *setting_menu)
    {
        if (setting_menu->objectName().isEmpty())
            setting_menu->setObjectName(QStringLiteral("setting_menu"));
        setting_menu->resize(800, 480);
        setting_menu->setStyleSheet(QStringLiteral(""));
        pushButton_time = new QPushButton(setting_menu);
        pushButton_time->setObjectName(QStringLiteral("pushButton_time"));
        pushButton_time->setGeometry(QRect(40, 30, 111, 61));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        pushButton_time->setFont(font);
        pushButton_network = new QPushButton(setting_menu);
        pushButton_network->setObjectName(QStringLiteral("pushButton_network"));
        pushButton_network->setGeometry(QRect(40, 130, 111, 61));
        pushButton_network->setFont(font);
        pushButton_back = new QPushButton(setting_menu);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(680, 410, 90, 50));
        pushButton_back->setFont(font);
        pushButton_serial = new QPushButton(setting_menu);
        pushButton_serial->setObjectName(QStringLiteral("pushButton_serial"));
        pushButton_serial->setGeometry(QRect(40, 230, 111, 61));
        pushButton_serial->setFont(font);
        frame = new QFrame(setting_menu);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(240, 30, 521, 361));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        calendarWidget = new QCalendarWidget(frame);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(10, 10, 488, 201));
        pushButton_confirm = new QPushButton(frame);
        pushButton_confirm->setObjectName(QStringLiteral("pushButton_confirm"));
        pushButton_confirm->setGeometry(QRect(410, 296, 99, 51));
        comboBox_hour = new QComboBox(frame);
        comboBox_hour->setObjectName(QStringLiteral("comboBox_hour"));
        comboBox_hour->setGeometry(QRect(20, 240, 85, 40));
        comboBox_min = new QComboBox(frame);
        comboBox_min->setObjectName(QStringLiteral("comboBox_min"));
        comboBox_min->setGeometry(QRect(140, 240, 85, 40));
        comboBox_sec = new QComboBox(frame);
        comboBox_sec->setObjectName(QStringLiteral("comboBox_sec"));
        comboBox_sec->setGeometry(QRect(260, 240, 85, 40));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 220, 67, 17));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 220, 67, 17));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 220, 67, 17));
        label_4 = new QLabel(setting_menu);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 100, 171, 241));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(setting_menu);

        QMetaObject::connectSlotsByName(setting_menu);
    } // setupUi

    void retranslateUi(QDialog *setting_menu)
    {
        setting_menu->setWindowTitle(QApplication::translate("setting_menu", "Dialog", 0));
        pushButton_time->setText(QApplication::translate("setting_menu", "\346\227\266\351\227\264", 0));
        pushButton_network->setText(QApplication::translate("setting_menu", "\347\275\221\347\273\234", 0));
        pushButton_back->setText(QApplication::translate("setting_menu", "\350\277\224\345\233\236", 0));
        pushButton_serial->setText(QApplication::translate("setting_menu", "\344\270\262\345\217\243", 0));
        pushButton_confirm->setText(QApplication::translate("setting_menu", "\347\241\256\350\256\244", 0));
        label->setText(QApplication::translate("setting_menu", "\346\227\266", 0));
        label_2->setText(QApplication::translate("setting_menu", "\345\210\206", 0));
        label_3->setText(QApplication::translate("setting_menu", "\347\247\222", 0));
        label_4->setText(QApplication::translate("setting_menu", "\346\270\251\351\246\250\346\217\220\347\244\272\357\274\232\n"
"\344\277\256\346\224\271\346\227\266\351\227\264\345\220\216\n"
"\347\202\271\345\207\273\347\241\256\350\256\244\346\214\211\351\222\256\n"
"\345\215\263\345\217\257\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class setting_menu: public Ui_setting_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_MENU_H
