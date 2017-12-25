#ifndef USERDATA_H
#define USERDATA_H

#include <QDialog>
#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QHeaderView>
#include <QSqlRelationalTableModel>
#include <QTableView>
#include <QSqlError>
#include <QApplication>
#include <QSqlDatabase>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QModelIndex>
#include <QMessageBox>
#include "mythread.h"
namespace Ui {
class UserData;
}

class UserData : public QDialog
{
    Q_OBJECT

public:
    explicit UserData(QWidget *parent = 0);
    ~UserData();
    bool CreatSql();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_ShowAllData_clicked();

    void on_pushButton_add_clicked();
    void UserDada_SLOT(QString str);

    void on_pushButton_find_clicked();

    void on_pushButton_update_clicked();

    void on_pushButton_delete_clicked();

private:
    Ui::UserData *ui;
    QSqlQueryModel *model;
    QTableView *view;
    QString date;
    QString time;
    QString action;
    QString name;
    QString remark;
    QStringList list;
    QStringList list_Item;
    mythread *pthread;
};

#endif // USERDATA_H
