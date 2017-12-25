#include "led.h"
#include "ui_led.h"

#include<QtDebug>
#include "mythread.h"
#include "common.h"
LED::LED(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LED)
{
    ui->setupUi(this);
    if(common::ledT1==true)
    {
        QIcon icon(":/picture/lighton.png");
        ui->led1->setIcon(icon);
        ui->led1->setIconSize(QSize(ui->led1->width(),ui->led1->height()));
    }
    else
    {
        QIcon icon(":/picture/lightoff.png");
        ui->led1->setIcon(icon);
        ui->led1->setIconSize(QSize(ui->led1->width(),ui->led1->height()));
    }

    if(common::ledT2==true)
    {

        QIcon icon(":/picture/lighton.png");
        ui->led2->setIcon(icon);
        ui->led2->setIconSize(QSize(ui->led2->width(),ui->led2->height()));
    }
    else
    {

        QIcon icon(":/picture/lightoff.png");
        ui->led2->setIcon(icon);
        ui->led2->setIconSize(QSize(ui->led2->width(),ui->led2->height()));
    }
    if(common::ledT3==true)
    {

        QIcon icon(":/picture/lighton.png");
        ui->led3->setIcon(icon);
        ui->led3->setIconSize(QSize(ui->led3->width(),ui->led3->height()));
    }
    else
    {

        QIcon icon(":/picture/lightoff.png");
        ui->led3->setIcon(icon);
        ui->led3->setIconSize(QSize(ui->led3->width(),ui->led3->height()));
    }
    if(common::ledT4==true)
    {

        QIcon icon(":/picture/lighton.png");
        ui->led4->setIcon(icon);
        ui->led4->setIconSize(QSize(ui->led4->width(),ui->led4->height()));
    }
    else
    {

        QIcon icon(":/picture/lightoff.png");
        ui->led4->setIcon(icon);
        ui->led4->setIconSize(QSize(ui->led4->width(),ui->led4->height()));
    }
}

LED::~LED()
{
    delete ui;
}

void LED::on_back_clicked()
{

    this->hide();
}
/////////////////////////////////////////////////
void LED::on_led1_clicked()
{
    common::ledT1=!common::ledT1;
    QString str;
    if(common::ledT1==true)
    {
        str="TL11";

        QIcon icon(":/picture/lighton.png");
        ui->led1->setIcon(icon);
        //ui->led1->setIconSize(QSize(140,240));
        ui->led1->setIconSize(QSize(ui->led1->width(),ui->led1->height()));

    }
    else
    {
        str="TL10";
        QIcon icon(":/picture/lightoff.png");
        ui->led1->setIcon(icon);
        ui->led1->setIconSize(QSize(ui->led1->width(),ui->led1->height()));

    }



    common::Commonstr = str;

}


void LED::on_led2_clicked()
{
    common::ledT2=!common::ledT2;
    QString str;
    if(common::ledT2==true)
    {
        str="TL21";
        QIcon icon(":/picture/lighton.png");
        ui->led2->setIcon(icon);
        ui->led2->setIconSize(QSize(ui->led2->width(),ui->led2->height()));
    }
    else
    {
        str="TL20";
        QIcon icon(":/picture/lightoff.png");
        ui->led2->setIcon(icon);
        ui->led2->setIconSize(QSize(ui->led2->width(),ui->led2->height()));
    }


    common::Commonstr = str;

}

void LED::on_led3_clicked()
{
    common::ledT3=!common::ledT3;
    QString str;
    if(common::ledT3==true)
    {
        str="TL31";
        QIcon icon(":/picture/lighton.png");
        ui->led3->setIcon(icon);
        ui->led3->setIconSize(QSize(ui->led3->width(),ui->led3->height()));
    }
    else
    {
        str="TL30";
        QIcon icon(":/picture/lightoff.png");
        ui->led3->setIcon(icon);
        ui->led3->setIconSize(QSize(ui->led3->width(),ui->led3->height()));
    }


    common::Commonstr = str;
}

void LED::on_led4_clicked()
{
    common::ledT4=!common::ledT4;
    QString str;
    if(common::ledT4==true)
    {
        str="TL41";
        QIcon icon(":/picture/lighton.png");
        ui->led4->setIcon(icon);
        ui->led4->setIconSize(QSize(ui->led4->width(),ui->led4->height()));
    }
    else
    {
        str="TL40";
        QIcon icon(":/picture/lightoff.png");
        ui->led4->setIcon(icon);
        ui->led4->setIconSize(QSize(ui->led4->width(),ui->led4->height()));

    }


    common::Commonstr = str;
}
