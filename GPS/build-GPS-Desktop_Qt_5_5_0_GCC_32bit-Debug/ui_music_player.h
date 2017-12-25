/********************************************************************************
** Form generated from reading UI file 'music_player.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSIC_PLAYER_H
#define UI_MUSIC_PLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_music_player
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_stop_cont;
    QPushButton *pushButton_next;
    QPushButton *pushButton_prev;
    QLabel *label;
    QSlider *verticalSlider;
    QLabel *label_title;
    QLabel *label_AlbumTitle;
    QSlider *horizontalSlider;
    QLabel *label_author;
    QLabel *label_song_start;
    QLabel *label_song_over;
    QLabel *label_TITLE;
    QLabel *label_AUTHOR;
    QLabel *label_ALBUMTITLE;
    QLabel *label_image;
    QPushButton *pushButton_back;
    QListWidget *listWidget;
    QPushButton *pushButton_open;
    QPushButton *pushButton_list;

    void setupUi(QDialog *music_player)
    {
        if (music_player->objectName().isEmpty())
            music_player->setObjectName(QStringLiteral("music_player"));
        music_player->resize(800, 480);
        groupBox = new QGroupBox(music_player);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 391, 261));
        pushButton_stop_cont = new QPushButton(groupBox);
        pushButton_stop_cont->setObjectName(QStringLiteral("pushButton_stop_cont"));
        pushButton_stop_cont->setGeometry(QRect(110, 220, 81, 31));
        pushButton_next = new QPushButton(groupBox);
        pushButton_next->setObjectName(QStringLiteral("pushButton_next"));
        pushButton_next->setGeometry(QRect(210, 220, 81, 31));
        pushButton_prev = new QPushButton(groupBox);
        pushButton_prev->setObjectName(QStringLiteral("pushButton_prev"));
        pushButton_prev->setGeometry(QRect(10, 220, 81, 31));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 200, 51, 21));
        verticalSlider = new QSlider(groupBox);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(320, 40, 19, 160));
        verticalSlider->setSliderPosition(50);
        verticalSlider->setOrientation(Qt::Vertical);
        label_title = new QLabel(groupBox);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(30, 40, 36, 16));
        label_AlbumTitle = new QLabel(groupBox);
        label_AlbumTitle->setObjectName(QStringLiteral("label_AlbumTitle"));
        label_AlbumTitle->setGeometry(QRect(30, 80, 48, 16));
        horizontalSlider = new QSlider(groupBox);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(20, 170, 261, 19));
        horizontalSlider->setSingleStep(1);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_author = new QLabel(groupBox);
        label_author->setObjectName(QStringLiteral("label_author"));
        label_author->setGeometry(QRect(30, 60, 48, 16));
        label_song_start = new QLabel(groupBox);
        label_song_start->setObjectName(QStringLiteral("label_song_start"));
        label_song_start->setGeometry(QRect(10, 190, 71, 16));
        label_song_over = new QLabel(groupBox);
        label_song_over->setObjectName(QStringLiteral("label_song_over"));
        label_song_over->setGeometry(QRect(260, 190, 61, 16));
        label_TITLE = new QLabel(groupBox);
        label_TITLE->setObjectName(QStringLiteral("label_TITLE"));
        label_TITLE->setGeometry(QRect(71, 40, 81, 16));
        label_AUTHOR = new QLabel(groupBox);
        label_AUTHOR->setObjectName(QStringLiteral("label_AUTHOR"));
        label_AUTHOR->setEnabled(true);
        label_AUTHOR->setGeometry(QRect(83, 60, 25, 12));
        label_AUTHOR->setMinimumSize(QSize(25, 12));
        label_AUTHOR->setMaximumSize(QSize(100, 12));
        label_AUTHOR->setAutoFillBackground(false);
        label_AUTHOR->setScaledContents(true);
        label_ALBUMTITLE = new QLabel(groupBox);
        label_ALBUMTITLE->setObjectName(QStringLiteral("label_ALBUMTITLE"));
        label_ALBUMTITLE->setGeometry(QRect(83, 80, 101, 16));
        label_ALBUMTITLE->setScaledContents(true);
        label_image = new QLabel(music_player);
        label_image->setObjectName(QStringLiteral("label_image"));
        label_image->setGeometry(QRect(490, 20, 211, 361));
        pushButton_back = new QPushButton(music_player);
        pushButton_back->setObjectName(QStringLiteral("pushButton_back"));
        pushButton_back->setGeometry(QRect(700, 440, 81, 31));
        listWidget = new QListWidget(music_player);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 280, 256, 192));
        pushButton_open = new QPushButton(music_player);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));
        pushButton_open->setGeometry(QRect(300, 290, 71, 31));
        pushButton_list = new QPushButton(music_player);
        pushButton_list->setObjectName(QStringLiteral("pushButton_list"));
        pushButton_list->setGeometry(QRect(300, 350, 71, 31));

        retranslateUi(music_player);

        QMetaObject::connectSlotsByName(music_player);
    } // setupUi

    void retranslateUi(QDialog *music_player)
    {
        music_player->setWindowTitle(QApplication::translate("music_player", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("music_player", "\346\222\255\346\224\276\345\231\250", 0));
        pushButton_stop_cont->setText(QApplication::translate("music_player", "\346\232\202\345\201\234/\346\222\255\346\224\276", 0));
        pushButton_next->setText(QApplication::translate("music_player", "\344\270\213\344\270\200\351\246\226", 0));
        pushButton_prev->setText(QApplication::translate("music_player", "\344\270\212\344\270\200\351\246\226", 0));
        label->setText(QApplication::translate("music_player", "\351\237\263\351\207\217", 0));
        label_title->setText(QApplication::translate("music_player", "\346\255\214\346\233\262\357\274\232", 0));
        label_AlbumTitle->setText(QApplication::translate("music_player", "\345\224\261\347\211\207\351\233\206\357\274\232", 0));
        label_author->setText(QApplication::translate("music_player", "\345\210\233\344\275\234\350\200\205\357\274\232", 0));
        label_song_start->setText(QApplication::translate("music_player", "song_start", 0));
        label_song_over->setText(QApplication::translate("music_player", "song_over", 0));
        label_TITLE->setText(QString());
        label_AUTHOR->setText(QString());
        label_ALBUMTITLE->setText(QString());
        label_image->setText(QApplication::translate("music_player", "\345\233\276\347\211\207", 0));
        pushButton_back->setText(QApplication::translate("music_player", "\350\277\224\345\233\236", 0));
        pushButton_open->setText(QApplication::translate("music_player", "\346\211\223\345\274\200", 0));
        pushButton_list->setText(QApplication::translate("music_player", "\345\210\227\350\241\250", 0));
    } // retranslateUi

};

namespace Ui {
    class music_player: public Ui_music_player {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSIC_PLAYER_H
