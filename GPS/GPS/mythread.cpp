#include "mythread.h"
#include"music_player.h"
#include<QtDebug>
mythread::mythread(QObject *parent) : QThread(parent)
{

}



void mythread::run()
{
    //实时获取进度条信息，并显示到进度条上
   while(1)
   {

        emit sig_getpos(true);
        emit sig_browser_looking();
        msleep(500);
        //qDebug()<<"run";

   }

}

