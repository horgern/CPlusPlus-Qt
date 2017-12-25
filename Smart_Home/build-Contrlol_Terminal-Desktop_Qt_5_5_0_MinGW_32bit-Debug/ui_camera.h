/********************************************************************************
** Form generated from reading UI file 'camera.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_H
#define UI_CAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_camera
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *ImageView;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *ImageCapture;
    QPushButton *buttonCapture;
    QPushButton *buttonSave;
    QPushButton *buttonQuit;

    void setupUi(QDialog *camera)
    {
        if (camera->objectName().isEmpty())
            camera->setObjectName(QStringLiteral("camera"));
        camera->resize(800, 480);
        horizontalLayoutWidget = new QWidget(camera);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 10, 531, 451));
        ImageView = new QHBoxLayout(horizontalLayoutWidget);
        ImageView->setObjectName(QStringLiteral("ImageView"));
        ImageView->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget = new QWidget(camera);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(560, 10, 201, 451));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        ImageCapture = new QLabel(verticalLayoutWidget);
        ImageCapture->setObjectName(QStringLiteral("ImageCapture"));

        verticalLayout->addWidget(ImageCapture);

        buttonCapture = new QPushButton(verticalLayoutWidget);
        buttonCapture->setObjectName(QStringLiteral("buttonCapture"));

        verticalLayout->addWidget(buttonCapture);

        buttonSave = new QPushButton(verticalLayoutWidget);
        buttonSave->setObjectName(QStringLiteral("buttonSave"));

        verticalLayout->addWidget(buttonSave);

        buttonQuit = new QPushButton(verticalLayoutWidget);
        buttonQuit->setObjectName(QStringLiteral("buttonQuit"));

        verticalLayout->addWidget(buttonQuit);


        retranslateUi(camera);

        QMetaObject::connectSlotsByName(camera);
    } // setupUi

    void retranslateUi(QDialog *camera)
    {
        camera->setWindowTitle(QApplication::translate("camera", "Dialog", 0));
        ImageCapture->setText(QApplication::translate("camera", "no image to display\342\200\246\342\200\246", 0));
        buttonCapture->setText(QApplication::translate("camera", "capture", 0));
        buttonSave->setText(QApplication::translate("camera", "save", 0));
        buttonQuit->setText(QApplication::translate("camera", "quit", 0));
    } // retranslateUi

};

namespace Ui {
    class camera: public Ui_camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_H
