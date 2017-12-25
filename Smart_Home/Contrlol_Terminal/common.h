#ifndef COMMON_H
#define COMMON_H
#include "widget.h"
#include "myserial.h"
#include "ui_setting_menu.h"
#include "led.h"
#include "mythread.h"
#include "house_app.h"
#include "setting.h"
#include "userdata.h"
#define Normal_Mode         1
#define Debug_Mode          2
#define Debug_Mode_Finish   3

#define Net_Normal_Mode         4
#define Net_Debug_Mode          5
#define Net_CONNECTED           6
#define Net_DISCONNECTED        7
class common
{
friend class Widget;
friend class myserial;
friend class setting_menu;
friend class led;
friend class mythread;
friend class house_app;
friend class setting;
friend class UserData;
public:
    common();
    static QString Commonstr; //全局按键信号的字符串，比如按下客厅灯是"TL11"
    static QString RecvFMstr; //全局变量，用来存放从串口读取的数据,即来自外设的数据信息
    static QString RecvFromNet;
    static bool ledT1;
    static bool ledT2;
    static bool ledT3;
    static bool ledT4;
    static bool haT1;
    static bool haT2;
private:
    static int  Serial_Flag;
    static int  Net_Flag;
    static int CommonData(QString str);

};

#endif // COMMON_H
