/********************************************************************************
** Form generated from reading UI file 'userdata.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERDATA_H
#define UI_USERDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserData
{
public:
    QPushButton *pushButton;
    QWidget *widget_Datebase;
    QPushButton *pushButton_add;
    QPushButton *pushButton_find;
    QPushButton *pushButton_update;
    QPushButton *pushButton_ShowAllData;
    QPushButton *pushButton_delete;
    QLineEdit *lineEdit;
    QComboBox *comboBox_action;
    QComboBox *comboBox_Item;

    void setupUi(QWidget *UserData)
    {
        if (UserData->objectName().isEmpty())
            UserData->setObjectName(QStringLiteral("UserData"));
        UserData->resize(800, 480);
        pushButton = new QPushButton(UserData);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(680, 420, 100, 50));
        widget_Datebase = new QWidget(UserData);
        widget_Datebase->setObjectName(QStringLiteral("widget_Datebase"));
        widget_Datebase->setGeometry(QRect(0, 0, 600, 480));
        pushButton_add = new QPushButton(widget_Datebase);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));
        pushButton_add->setGeometry(QRect(500, 280, 100, 40));
        pushButton_find = new QPushButton(widget_Datebase);
        pushButton_find->setObjectName(QStringLiteral("pushButton_find"));
        pushButton_find->setGeometry(QRect(500, 360, 100, 40));
        pushButton_update = new QPushButton(widget_Datebase);
        pushButton_update->setObjectName(QStringLiteral("pushButton_update"));
        pushButton_update->setGeometry(QRect(500, 400, 100, 40));
        pushButton_ShowAllData = new QPushButton(widget_Datebase);
        pushButton_ShowAllData->setObjectName(QStringLiteral("pushButton_ShowAllData"));
        pushButton_ShowAllData->setGeometry(QRect(500, 440, 100, 40));
        pushButton_delete = new QPushButton(widget_Datebase);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        pushButton_delete->setGeometry(QRect(500, 320, 100, 40));
        lineEdit = new QLineEdit(widget_Datebase);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(500, 180, 100, 30));
        comboBox_action = new QComboBox(widget_Datebase);
        comboBox_action->setObjectName(QStringLiteral("comboBox_action"));
        comboBox_action->setGeometry(QRect(500, 230, 100, 30));
        comboBox_Item = new QComboBox(widget_Datebase);
        comboBox_Item->setObjectName(QStringLiteral("comboBox_Item"));
        comboBox_Item->setGeometry(QRect(500, 150, 100, 30));

        retranslateUi(UserData);

        QMetaObject::connectSlotsByName(UserData);
    } // setupUi

    void retranslateUi(QWidget *UserData)
    {
        UserData->setWindowTitle(QApplication::translate("UserData", "Form", 0));
        pushButton->setText(QApplication::translate("UserData", "\350\277\224\345\233\236", 0));
        pushButton_add->setText(QApplication::translate("UserData", "Add", 0));
        pushButton_find->setText(QApplication::translate("UserData", "Find", 0));
        pushButton_update->setText(QApplication::translate("UserData", "Update", 0));
        pushButton_ShowAllData->setText(QApplication::translate("UserData", "ShowAllData", 0));
        pushButton_delete->setText(QApplication::translate("UserData", "Delete", 0));
    } // retranslateUi

};

namespace Ui {
    class UserData: public Ui_UserData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERDATA_H
