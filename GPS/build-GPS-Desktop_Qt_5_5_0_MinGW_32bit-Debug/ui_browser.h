/********************************************************************************
** Form generated from reading UI file 'browser.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSER_H
#define UI_BROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_browser
{
public:

    void setupUi(QDialog *browser)
    {
        if (browser->objectName().isEmpty())
            browser->setObjectName(QStringLiteral("browser"));
        browser->resize(800, 480);

        retranslateUi(browser);

        QMetaObject::connectSlotsByName(browser);
    } // setupUi

    void retranslateUi(QDialog *browser)
    {
        browser->setWindowTitle(QApplication::translate("browser", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class browser: public Ui_browser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSER_H
