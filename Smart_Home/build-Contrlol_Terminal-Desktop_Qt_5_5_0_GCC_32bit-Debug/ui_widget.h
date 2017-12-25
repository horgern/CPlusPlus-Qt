/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_date;
    QLabel *label_Temp;
    QLabel *label_Humii;
    QLabel *label_showPicDoor;
    QLabel *label_showPicTopic;
    QLabel *label_PicCurtain;
    QLabel *label_ShowWifi;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(800, 480);
        Widget->setStyleSheet(QStringLiteral(""));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 140, 90, 90));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(16);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QLatin1String("\n"
"border-image: url(:/picture/light.png);"));
        pushButton->setFlat(false);
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 140, 90, 90));
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/picture/house_app.png);"));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 140, 90, 90));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QLatin1String("border-image: url(:/picture/curtain.png);\n"
""));
        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 270, 90, 90));
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QLatin1String("border-image: url(:/picture/lock.png);\n"
""));
        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(170, 270, 90, 90));
        pushButton_5->setFont(font);
        pushButton_5->setStyleSheet(QStringLiteral("border-image: url(:/picture/camara.jpg);"));
        pushButton_6 = new QPushButton(Widget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(300, 270, 90, 90));
        pushButton_6->setFont(font);
        pushButton_6->setStyleSheet(QStringLiteral("border-image: url(:/picture/setting.png);"));
        pushButton_7 = new QPushButton(Widget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(30, 400, 361, 51));
        pushButton_7->setFont(font);
        pushButton_7->setStyleSheet(QStringLiteral("border-image: url(:/picture/background.jpg);"));
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(540, 35, 111, 23));
        lcdNumber->setStyleSheet(QStringLiteral(""));
        lcdNumber->setFrameShape(QFrame::NoFrame);
        lcdNumber->setDigitCount(8);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_date = new QLCDNumber(Widget);
        lcdNumber_date->setObjectName(QStringLiteral("lcdNumber_date"));
        lcdNumber_date->setGeometry(QRect(530, 10, 111, 23));
        lcdNumber_date->setStyleSheet(QStringLiteral(""));
        lcdNumber_date->setFrameShape(QFrame::NoFrame);
        lcdNumber_date->setDigitCount(10);
        lcdNumber_date->setSegmentStyle(QLCDNumber::Flat);
        label_Temp = new QLabel(Widget);
        label_Temp->setObjectName(QStringLiteral("label_Temp"));
        label_Temp->setGeometry(QRect(650, 10, 135, 20));
        label_Humii = new QLabel(Widget);
        label_Humii->setObjectName(QStringLiteral("label_Humii"));
        label_Humii->setGeometry(QRect(650, 35, 135, 20));
        label_showPicDoor = new QLabel(Widget);
        label_showPicDoor->setObjectName(QStringLiteral("label_showPicDoor"));
        label_showPicDoor->setGeometry(QRect(460, 260, 241, 101));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_showPicDoor->setFont(font1);
        label_showPicTopic = new QLabel(Widget);
        label_showPicTopic->setObjectName(QStringLiteral("label_showPicTopic"));
        label_showPicTopic->setGeometry(QRect(30, 20, 401, 101));
        label_PicCurtain = new QLabel(Widget);
        label_PicCurtain->setObjectName(QStringLiteral("label_PicCurtain"));
        label_PicCurtain->setGeometry(QRect(460, 120, 241, 101));
        label_PicCurtain->setFont(font1);
        label_ShowWifi = new QLabel(Widget);
        label_ShowWifi->setObjectName(QStringLiteral("label_ShowWifi"));
        label_ShowWifi->setGeometry(QRect(480, 0, 40, 40));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QApplication::translate("Widget", "\347\224\250\346\210\267\346\225\260\346\215\256", 0));
        label_Temp->setText(QApplication::translate("Widget", "\346\270\251\345\272\246\357\274\232", 0));
        label_Humii->setText(QApplication::translate("Widget", "\346\271\277\345\272\246\357\274\232", 0));
        label_showPicDoor->setText(QApplication::translate("Widget", "showPicDoor", 0));
        label_showPicTopic->setText(QApplication::translate("Widget", "showPicTopic", 0));
        label_PicCurtain->setText(QApplication::translate("Widget", "showPicCurtain", 0));
        label_ShowWifi->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
