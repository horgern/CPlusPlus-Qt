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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_browser;
    QPushButton *pushButton_music_player;
    QPushButton *pushButton_abulm;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(800, 480);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 140, 131, 41));
        pushButton_browser = new QPushButton(Widget);
        pushButton_browser->setObjectName(QStringLiteral("pushButton_browser"));
        pushButton_browser->setGeometry(QRect(450, 140, 131, 41));
        pushButton_music_player = new QPushButton(Widget);
        pushButton_music_player->setObjectName(QStringLiteral("pushButton_music_player"));
        pushButton_music_player->setGeometry(QRect(150, 230, 131, 41));
        pushButton_abulm = new QPushButton(Widget);
        pushButton_abulm->setObjectName(QStringLiteral("pushButton_abulm"));
        pushButton_abulm->setGeometry(QRect(450, 230, 131, 41));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        pushButton->setText(QApplication::translate("Widget", "\345\257\274\350\210\252\345\234\260\345\233\276", 0));
        pushButton_browser->setText(QApplication::translate("Widget", "\346\265\217\350\247\210\345\231\250", 0));
        pushButton_music_player->setText(QApplication::translate("Widget", "\351\237\263\344\271\220\346\222\255\346\224\276\345\231\250", 0));
        pushButton_abulm->setText(QApplication::translate("Widget", "\347\233\270\345\206\214", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
