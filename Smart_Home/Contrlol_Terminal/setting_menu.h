#ifndef SETTING_MENU_H
#define SETTING_MENU_H

#include <QDialog>
#include <QCalendarWidget>
namespace Ui {
class setting_menu;
}

class setting_menu : public QDialog
{
    Q_OBJECT

public:
    explicit setting_menu(QWidget *parent = 0);
    ~setting_menu();

private slots:
    void on_pushButton_network_clicked();

    void on_pushButton_back_clicked();

    void on_pushButton_serial_clicked();

    void on_pushButton_confirm_clicked();

    void on_pushButton_time_clicked();

private:
    Ui::setting_menu *ui;
};

#endif // SETTING_MENU_H
