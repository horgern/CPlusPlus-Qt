#include "userdata.h"
#include "ui_userdata.h"
#include "common.h"
#include <QStringList>
#include<QTime>
#include <QDate>
#include "led.h"
UserData::UserData(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserData)
{
    ui->setupUi(this);
    model = new QSqlQueryModel(this);
    view = new QTableView(this);
    list<<"TL11"<<"TL10"<<"TC11"<<"TC10"<<"TL21"<<"TL20"<<"TL31"<<"TL30"<<"TL41"<<"TL40";
    ui->comboBox_action->addItems(list);
    list_Item<<"ID"<<"NAME"<<"DATE"<<"TIME"<<"REMARK";
    ui->comboBox_Item->addItems(list_Item);
    if(CreatSql())
    {
        qDebug()<<"sqlite normal";

    }
    else
        qDebug()<<"sqlite innormal";

    model->setQuery("select * from myTrace");

    view->setModel(model);
    view->resize(QSize(500,480));
    view->resizeRowsToContents();
    view->resizeColumnsToContents();
    view->show();

    pthread = new mythread(this);
    //LED *pled = new LED(this);
    connect(pthread,SIGNAL(UserData_SIG(QString)),this,SLOT(UserDada_SLOT(QString)));
    pthread->start();
}

UserData::~UserData()
{
    delete ui;
}

bool UserData::CreatSql()
{
    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
      db = QSqlDatabase::database("qt_sql_default_connection");
    else
    {
        db = QSqlDatabase::addDatabase("QSQLITE"); }
        db.setDatabaseName("mytrace.db");
        if(!db.open())
        {
            QMessageBox::critical(0,"cannot open database","unable to establsh a database connection.",QMessageBox::Cancel);
            return false;
        }
        QSqlQuery query(db);

        query.exec("create table myTrace(ID INTEGER PRIMARY KEY,DATE date,TIME time,ACTION varchar(50),NAME varchar(50),REMARK varchar(50));");
        //query.exec("insert into myTrace(DATE,TIME,ACTION,NAME,REMARK) values('2017-12-23','18:18:18','TL11','chz','remark');");

    return true;
}

void UserData::on_pushButton_clicked()
{
    this->hide();
}

void UserData::on_pushButton_ShowAllData_clicked()
{
    model->setQuery("select * from myTrace");
    view->resizeRowsToContents();
    view->resizeColumnsToContents();
    view->show();
}

void UserData::on_pushButton_add_clicked()
{
    date = QDate::currentDate().toString(Qt::ISODate);;
    time = QTime::currentTime().toString("hh:mm:ss");;
    action = "ACT";
    name = "USER";
    remark = "as test";

    QString AddItem = QString("insert into myTrace(DATE,TIME,ACTION,NAME,REMARK) values('%1','%2','%3','%4','%5');").arg(date,time,action,name,remark);
    model->setQuery(AddItem);
    model->setQuery("select * from myTrace");
    view->resizeRowsToContents();
    view->resizeColumnsToContents();
    view->show();
}

void UserData::UserDada_SLOT(QString str)
{
    date = QDate::currentDate().toString(Qt::ISODate);;
    time = QTime::currentTime().toString("hh:mm:ss");;
    action = str;
    name = "USER";
    remark = " ";

    QString AddItem = QString("insert into myTrace(DATE,TIME,ACTION,NAME,REMARK) values('%1','%2','%3','%4','%5');").arg(date,time,action,name,remark);
    model->setQuery(AddItem);
    model->setQuery("select * from myTrace");
    /*view->resizeRowsToContents();
    view->resizeColumnsToContents();
    view->show();*/
    qDebug()<<"signal"+str;
}

void UserData::on_pushButton_find_clicked()
{
    QString FindCommand = QString("SELECT * FROM myTrace  where %1='%2'").arg("ACTION",ui->comboBox_action->currentText());
    model->setQuery(FindCommand);
    view->show();
}

void UserData::on_pushButton_update_clicked()
{
    QString UpdateCom = QString("UPDATE myTrace set %1='%2' where %3='%4'").arg(ui->comboBox_Item->currentText(),ui->lineEdit->text(),"ACTION",ui->comboBox_action->currentText());
    model->setQuery(UpdateCom);
    model->setQuery("SELECT * FROM myTrace");
    view->resizeRowsToContents();
    view->resizeColumnsToContents();
    view->show();
}

void UserData::on_pushButton_delete_clicked()
{
    QString DeleteCom = QString("delete from myTrace where %1='%2'").arg(ui->comboBox_Item->currentText(),ui->lineEdit->text());
    model->setQuery(DeleteCom);
    model->setQuery("SELECT * FROM myTrace");
    view->resizeRowsToContents();
    view->resizeColumnsToContents();
    view->show();
}
