#include "house_app.h"
#include "ui_house_app.h"
#include "common.h"
house_app::house_app(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::house_app)
{
    ui->setupUi(this);
    QPalette palette;
       //加载背景图片
    QPixmap pix = QPixmap(":/picture/background2.jpg");
    pix = pix.scaled(QSize(size()));
    palette.setBrush(QPalette::Window,QBrush(pix));

    setPalette(palette);
    if(common::haT1==true)
    {
        QIcon icon(":/picture/switchon.png");
        ui->kettle->setIcon(icon);
        ui->kettle->setIconSize(QSize(ui->kettle->width(),ui->kettle->height()));
    }
    else
    {
        QIcon icon(":/picture/switchoff.png");
        ui->kettle->setIcon(icon);
        ui->kettle->setIconSize(QSize(ui->kettle->width(),ui->kettle->height()));
    }
    if(common::haT2==true)
    {
        QIcon icon(":/picture/switchon.png");
        ui->TV->setIcon(icon);
        ui->TV->setIconSize(QSize(ui->TV->width(),ui->TV->height()));
    }
    else
    {
        QIcon icon(":/picture/switchoff.png");
        ui->TV->setIcon(icon);
        ui->TV->setIconSize(QSize(ui->TV->width(),ui->TV->height()));
    }

}

house_app::~house_app()
{
    delete ui;
}

void house_app::on_back_clicked()
{
    this->close();
}

void house_app::on_kettle_clicked()
{
    common::haT1 = !common::haT1;
    QString str;
    if(common::haT1==true)
    {
        str="TR11";
        QIcon icon(":/picture/switchon.png");
        ui->kettle->setIcon(icon);
        ui->kettle->setIconSize(QSize(ui->kettle->width(),ui->kettle->height()));
    }
    else
    {
        str="TR10";
        QIcon icon(":/picture/switchoff.png");
        ui->kettle->setIcon(icon);
        ui->kettle->setIconSize(QSize(ui->kettle->width(),ui->kettle->height()));
    }
    common::Commonstr = str;
}

void house_app::on_TV_clicked()
{
    common::haT2 = !common::haT2;
    QString str;
    if(common::haT2==true)
    {
        str="TR21";
        QIcon icon(":/picture/switchon.png");
        ui->TV->setIcon(icon);
        ui->TV->setIconSize(QSize(ui->TV->width(),ui->TV->height()));
    }
    else
    {
        str="TR20";
        QIcon icon(":/picture/switchoff.png");
        ui->TV->setIcon(icon);
        ui->TV->setIconSize(QSize(ui->TV->width(),ui->TV->height()));
    }
    common::Commonstr = str;
}
