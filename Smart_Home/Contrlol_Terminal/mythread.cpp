#include "mythread.h"
#include<QtDebug>

#include "led.h"
#include "common.h"


mythread::mythread(QObject *parent) : QThread(parent)
{

}


void mythread::run()
{

    count = 0;

    while(1)
    {
        count++;
        emit sig_get_network();

        msleep(50);


        if(count == 2)
        {
            emit show_sig(common::Commonstr);
            if(common::Commonstr != Temp_CommonStr && common::Commonstr != " ")
            {
                emit UserData_SIG(common::Commonstr);
                common::Commonstr = " ";

            }
            Temp_CommonStr = common::Commonstr;
            common::Commonstr = " ";
            count=0;
        }
    }
}

void mythread::DataFromMachine()
{

}



