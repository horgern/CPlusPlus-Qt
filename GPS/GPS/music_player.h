#ifndef MUSIC_PLAYER_H
#define MUSIC_PLAYER_H

#include <QDialog>
#include <QMediaPlayer>
#include <QMediaMetaData>
#include<mythread.h>
#include <QListWidget>
#include <QCloseEvent>
#define Default_Path "E:\\QT\\song\\"
namespace Ui {
class music_player;
}

class music_player : public QDialog
{
    Q_OBJECT

public:
    explicit music_player(QWidget *parent = 0);
    ~music_player();

private slots:
    void on_pushButton_open_clicked();

    void on_pushButton_stop_cont_clicked();

    void on_verticalSlider_sliderMoved(int position);

    void on_pushButton_next_clicked();

    void on_pushButton_prev_clicked();

    void on_pushButton_back_clicked();

    void slot_getpos(bool Flag);

    void on_horizontalSlider_sliderMoved(int position);

    void closeEvent(QCloseEvent * event);


    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);



    void on_listWidget_showlist_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::music_player *ui;
    QMediaPlayer *player;
    mythread * pthread;

    QListWidgetItem * plistwidget;
    bool start_pause;
    int num;
    QString path;
    int media_time;
    QString current_time;
    QString over_time;
    int row;



protected:
    void show_song_message(QMediaPlayer * player);
    void next_song(QMediaPlayer * player);
    void prev_song(QMediaPlayer * player);
    void play_song(QMediaPlayer *player,QString path);

};



#endif // MUSIC_PLAYER_H
