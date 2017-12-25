/********************************************************************************
** Form generated from reading UI file 'led.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LED_H
#define UI_LED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LED
{
public:
    QPushButton *led1;
    QPushButton *led2;
    QPushButton *led3;
    QPushButton *led4;
    QPushButton *back;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *LED)
    {
        if (LED->objectName().isEmpty())
            LED->setObjectName(QStringLiteral("LED"));
        LED->resize(800, 480);
        LED->setStyleSheet(QStringLiteral("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));
        led1 = new QPushButton(LED);
        led1->setObjectName(QStringLiteral("led1"));
        led1->setGeometry(QRect(60, 80, 140, 240));
        led1->setFocusPolicy(Qt::NoFocus);
        led1->setStyleSheet(QStringLiteral(""));
        led1->setFlat(true);
        led2 = new QPushButton(LED);
        led2->setObjectName(QStringLiteral("led2"));
        led2->setGeometry(QRect(230, 80, 140, 240));
        led2->setFocusPolicy(Qt::NoFocus);
        led2->setStyleSheet(QStringLiteral(""));
        led2->setFlat(true);
        led3 = new QPushButton(LED);
        led3->setObjectName(QStringLiteral("led3"));
        led3->setGeometry(QRect(410, 80, 140, 240));
        led3->setFocusPolicy(Qt::NoFocus);
        led3->setStyleSheet(QStringLiteral(""));
        led3->setFlat(true);
        led4 = new QPushButton(LED);
        led4->setObjectName(QStringLiteral("led4"));
        led4->setGeometry(QRect(590, 80, 140, 240));
        led4->setFocusPolicy(Qt::NoFocus);
        led4->setStyleSheet(QStringLiteral(""));
        led4->setFlat(true);
        back = new QPushButton(LED);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(680, 410, 90, 50));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        back->setFont(font);
        label = new QLabel(LED);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 40, 71, 31));
        label_2 = new QLabel(LED);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(270, 40, 71, 31));
        label_3 = new QLabel(LED);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(460, 40, 71, 31));
        label_4 = new QLabel(LED);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(630, 40, 71, 31));

        retranslateUi(LED);

        QMetaObject::connectSlotsByName(LED);
    } // setupUi

    void retranslateUi(QDialog *LED)
    {
        LED->setWindowTitle(QApplication::translate("LED", "Dialog", 0));
        led1->setText(QString());
        led2->setText(QString());
        led3->setText(QString());
        led4->setText(QString());
        back->setText(QApplication::translate("LED", "\350\277\224\345\233\236", 0));
        label->setText(QApplication::translate("LED", "\345\256\242\345\216\205\347\201\257", 0));
        label_2->setText(QApplication::translate("LED", "\351\244\220\345\216\205\347\201\257", 0));
        label_3->setText(QApplication::translate("LED", "\345\273\212\347\201\257 ", 0));
        label_4->setText(QApplication::translate("LED", "\345\220\212\347\201\257", 0));
    } // retranslateUi

};

namespace Ui {
    class LED: public Ui_LED {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LED_H
