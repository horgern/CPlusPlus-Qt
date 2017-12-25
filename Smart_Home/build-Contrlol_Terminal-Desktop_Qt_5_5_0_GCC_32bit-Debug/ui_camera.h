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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_camera
{
public:
    QLabel *ImageCapture;
    QPushButton *buttonCapture;
    QPushButton *buttonSave;
    QPushButton *buttonQuit;
    QTextEdit *textEdit;
    QLabel *label_picture;

    void setupUi(QDialog *camera)
    {
        if (camera->objectName().isEmpty())
            camera->setObjectName(QStringLiteral("camera"));
        camera->resize(800, 480);
        ImageCapture = new QLabel(camera);
        ImageCapture->setObjectName(QStringLiteral("ImageCapture"));
        ImageCapture->setGeometry(QRect(645, 230, 131, 112));
        QFont font;
        font.setPointSize(6);
        ImageCapture->setFont(font);
        buttonCapture = new QPushButton(camera);
        buttonCapture->setObjectName(QStringLiteral("buttonCapture"));
        buttonCapture->setGeometry(QRect(645, 360, 130, 30));
        QFont font1;
        font1.setPointSize(8);
        buttonCapture->setFont(font1);
        buttonSave = new QPushButton(camera);
        buttonSave->setObjectName(QStringLiteral("buttonSave"));
        buttonSave->setGeometry(QRect(645, 400, 130, 30));
        buttonSave->setFont(font1);
        buttonQuit = new QPushButton(camera);
        buttonQuit->setObjectName(QStringLiteral("buttonQuit"));
        buttonQuit->setGeometry(QRect(645, 440, 130, 30));
        buttonQuit->setFont(font1);
        textEdit = new QTextEdit(camera);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(641, 10, 150, 200));
        textEdit->setFont(font);
        textEdit->setFocusPolicy(Qt::ClickFocus);
        label_picture = new QLabel(camera);
        label_picture->setObjectName(QStringLiteral("label_picture"));
        label_picture->setGeometry(QRect(0, 0, 640, 480));

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
        label_picture->setText(QApplication::translate("camera", "show picture", 0));
    } // retranslateUi

};

namespace Ui {
    class camera: public Ui_camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_H
