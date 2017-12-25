/********************************************************************************
** Form generated from reading UI file 'house_app.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOUSE_APP_H
#define UI_HOUSE_APP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_house_app
{
public:
    QPushButton *kettle;
    QPushButton *TV;
    QPushButton *back;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *house_app)
    {
        if (house_app->objectName().isEmpty())
            house_app->setObjectName(QStringLiteral("house_app"));
        house_app->resize(800, 480);
        kettle = new QPushButton(house_app);
        kettle->setObjectName(QStringLiteral("kettle"));
        kettle->setGeometry(QRect(80, 120, 111, 111));
        kettle->setFlat(true);
        TV = new QPushButton(house_app);
        TV->setObjectName(QStringLiteral("TV"));
        TV->setGeometry(QRect(300, 120, 111, 111));
        TV->setFlat(true);
        back = new QPushButton(house_app);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(630, 400, 90, 50));
        label = new QLabel(house_app);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 260, 91, 21));
        label_2 = new QLabel(house_app);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(340, 260, 91, 21));

        retranslateUi(house_app);

        QMetaObject::connectSlotsByName(house_app);
    } // setupUi

    void retranslateUi(QDialog *house_app)
    {
        house_app->setWindowTitle(QApplication::translate("house_app", "Dialog", 0));
        kettle->setText(QString());
        TV->setText(QString());
        back->setText(QApplication::translate("house_app", "\350\277\224\345\233\236", 0));
        label->setText(QApplication::translate("house_app", "\347\224\265\347\203\255\345\243\266", 0));
        label_2->setText(QApplication::translate("house_app", "\347\224\265\350\247\206", 0));
    } // retranslateUi

};

namespace Ui {
    class house_app: public Ui_house_app {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOUSE_APP_H
