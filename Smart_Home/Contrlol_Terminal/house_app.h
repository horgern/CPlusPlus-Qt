#ifndef HOUSE_APP_H
#define HOUSE_APP_H

#include <QDialog>

namespace Ui {
class house_app;
}

class house_app : public QDialog
{
    Q_OBJECT


public:
    explicit house_app(QWidget *parent = 0);
    ~house_app();

private slots:
    void on_back_clicked();

    void on_kettle_clicked();

    void on_TV_clicked();

private:
    Ui::house_app *ui;

};

#endif // HOUSE_APP_H
