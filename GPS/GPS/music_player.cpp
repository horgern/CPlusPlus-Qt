#include "music_player.h"
#include "ui_music_player.h"
#include <QFileDialog>
#include<QString>
#include <QThread>
#include <QDate>
#include <QDir>
#include <Qt>
#include <QTime>
music_player::music_player(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::music_player)
{
    ui->setupUi(this);
    setWindowTitle("音乐播放器");
    setMinimumSize(800, 480);
    setMaximumSize(800, 480);
    //定义一个多线程管理者
    pthread = new mythread(this);
    //连接信号和槽
    connect(pthread,SIGNAL(sig_getpos(bool)),
            this,SLOT(slot_getpos(bool)));



    //启动多线程
    pthread->start();

    num = 1;
    player = new QMediaPlayer(this);
    start_pause = false;

    /*QStringList files = QFileDialog::getOpenFileNames(
                                         this,
                                       "Select one or more files to open",
                                       "C:\\Users\\Administrator\\Desktop\\song",
                                       "(*.mp3)");
    */
    QDir dir(Default_Path);
    //qDebug()<<dir.entryList();

    QFileInfo mfi;
    foreach(mfi, dir.entryList())//
    {
        if(mfi.isFile()          ||
           mfi.fileName()=="."   ||
           mfi.fileName() == ".." )
        {
            //ui->listWidget->addItem(file);
            continue;
        }
        else
        {
             ui->listWidget->addItem(dir.filePath(mfi.fileName()).replace('\/','\\'));
             ui->listWidget_showlist->addItem(mfi.fileName().replace(QRegExp("[.]..."),QString("")));
        }

    }
     ui->listWidget->setCurrentRow(ui->listWidget->count()-2);
     ui->listWidget_showlist->setCurrentRow(ui->listWidget_showlist->count()-2);
     plistwidget = ui->listWidget->currentItem();    //获取当前的选项
     //path = Default_Path + plistwidget->text();
     path = plistwidget->text();
     player->setMedia(QUrl::fromLocalFile(path));

     //ui->pushButton_open->visibleRegion();

}

music_player::~music_player()
{
    delete ui;
}

void music_player::on_pushButton_open_clicked()
{
    QStringList files = QFileDialog::getOpenFileNames(this, tr("Selec Files to play"));
    //��
    QString file;
    QString str;

        //qDebug()<<"absoluteFilePath()"<<mfi.absoluteFilePath();
        //qDebug()<<"absolutePath()"<<mfi.absolutePath();
    foreach(file, files)//
    {
        QFileInfo mfi(file);
        QDir dir(mfi.absolutePath());
        qDebug()<<ui->listWidget->findItems(mfi.fileName(),Qt::MatchEndsWith).isEmpty();

        if(ui->listWidget->findItems(mfi.fileName(),Qt::MatchEndsWith).isEmpty())
        {

            ui->listWidget->addItem(mfi.absoluteFilePath().replace('\/','\\').toStdString().c_str());
            ui->listWidget_showlist->addItem(mfi.fileName().replace(QString(".mp3"),QString("")));
        }

    }

}

void music_player::on_pushButton_stop_cont_clicked()
{
    start_pause = !start_pause;
    show_song_message(player);
    if(start_pause)
    {
        music_player::play_song(player,path);
        //player->play();

        //ui->pushButton_stop_cont->setText("暂停");
    }
    else
    {
        player->pause();
        ui->pushButton_stop_cont->setText("播放");

    }

}

void music_player::on_verticalSlider_sliderMoved(int position)
{
    player->setVolume(position);
}

void music_player::on_pushButton_next_clicked()
{
    music_player::next_song(player);

}

void music_player::on_pushButton_prev_clicked()
{

    music_player::prev_song(player);
}

void music_player::on_pushButton_back_clicked()
{
    player->stop();
    pthread->exit();
    //隐藏界面，并返回对应的值
    done(1);
}

void music_player::slot_getpos(bool Flag)
{

    show_song_message(player);
    media_time = player->QMediaPlayer::position();
    ui->horizontalSlider->setValue(media_time);
    //current_time = QString("%1:%2").arg(media_time/1000/60).arg(media_time/1000%60);
    QTime t(0,0,0);
    current_time = t.addMSecs(media_time).toString("mm:ss");
    ui->label_song_start->setText(current_time);

    if(player->QMediaPlayer::mediaStatus() == player->QMediaPlayer::EndOfMedia)
    {
        QThread::sleep(2);
        music_player::next_song(player);

    }
    //qDebug()<<"recv";
}

void music_player::show_song_message(QMediaPlayer * player)
{
    QTime t(0,0,0);

    //current_time = QString("%1:%2").arg(media_time/1000/60).arg(media_time/1000%60);
    //current_time = QString().sprintf("%2d:%2d",(media_time/1000/60),(media_time/1000%60));
/* 可省略
    media_time = player->QMediaPlayer::position();
    ui->horizontalSlider->setValue(media_time);
    current_time = t.addMSecs(media_time).toString("mm:ss");
    ui->label_song_start->setText(current_time);
*/
    media_time = player->metaData(QMediaMetaData::Duration).toInt();
    over_time = t.addMSecs(media_time).toString("mm:ss");
    ui->label_song_over->setText(over_time);
    ui->horizontalSlider->setMaximum(media_time);

    //qDebug()<<"Time:"<< media_time;
    //qDebug()<<"Time:"<<player->QMediaPlayer::position();
    //over_time = QString("%1:%2").arg(media_time/1000/60).arg(media_time/1000%60);
    //qDebug()<<over_time;
    //qDebug()<<"Title:"<< player->metaData(QMediaMetaData::Title).toString().toStdString().c_str();
    //qDebug()<<"AlbumTitle:"<< player->metaData(QMediaMetaData::AlbumTitle).toString().toStdString().c_str();
    //qDebug()<<"Author:"<< player->metaData(QMediaMetaData::Author).toString().toStdString().c_str();
    ui->label_TITLE->setText(player->metaData(QMediaMetaData::Title).toString().toStdString().c_str());
    ui->label_ALBUMTITLE->setText(player->metaData(QMediaMetaData::Title).toString().toStdString().c_str());
    ui->label_AUTHOR->setText(player->metaData(QMediaMetaData::Author).toString().toStdString().c_str());
    ui->label_TITLE->adjustSize();
    ui->label_ALBUMTITLE->adjustSize();
    ui->label_AUTHOR->adjustSize();
    //qDebug()<<"ParentalRating:"<< player->metaData(QMediaMetaData::ParentalRating).toString().toStdString().c_str();
}

void music_player::next_song(QMediaPlayer *player)
{
    player->pause();

    if(ui->listWidget->count() == 0)
    {
        qDebug()<<"no item!";
        return;
    }


     if(row+1 == ui->listWidget->count())
     {
        row = 0;
        ui->listWidget->setCurrentRow(row);
        music_player::play_song(player,path);
        return;
     }

    row = ui->listWidget->currentRow();
    ui->listWidget->setCurrentRow(++row);

    music_player::play_song(player,path);
}

void music_player::prev_song(QMediaPlayer *player)
{
    player->pause();

    if(ui->listWidget->count() == 0)
    {
        qDebug()<<"no item!";
        return;
    }

     if(row == 0)
     {
        row = ui->listWidget->count();
        ui->listWidget->setCurrentRow(--row);
        music_player::play_song(player,path);
        return;
     }

    row = ui->listWidget->currentRow();
    ui->listWidget->setCurrentRow(--row);

    music_player::play_song(player,path);
}

void music_player::play_song(QMediaPlayer *player, QString path)
{
    plistwidget = ui->listWidget->currentItem();    //获取当前的选项
    row = ui->listWidget->currentRow();
    ui->listWidget_showlist->setCurrentRow(row);
    //qDebug()<<plistwidget->text();
    //QFileInfo mfi(plistwidget->text());
    //qDebug()<<"filepath"<<::filePath(plistwidget->text()).replace('\/','\\');
    //path = Default_Path + plistwidget->text();
    path = plistwidget->text();
    qDebug()<<path;

    player->setMedia(QUrl::fromLocalFile(path));
    QThread::usleep(100);
    player->play();
    ui->pushButton_stop_cont->setText("暂停");
}

void music_player::on_horizontalSlider_sliderMoved(int position)
{

    player->QMediaPlayer::setPosition(ui->horizontalSlider->value());
    //qDebug()<<"setposion";
}

void music_player::closeEvent(QCloseEvent *event)
{
    player->stop();
    pthread->exit();
    qDebug()<<"closeWindows";
}




void music_player::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
    row = ui->listWidget->currentRow();
    ui->listWidget->setCurrentRow(row);

    music_player::play_song(player,path);
}



void music_player::on_listWidget_showlist_itemDoubleClicked(QListWidgetItem *item)
{
    row = ui->listWidget_showlist->currentRow();
    ui->listWidget->setCurrentRow(row);
    music_player::play_song(player,path);
}
