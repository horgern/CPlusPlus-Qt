#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QIcon>
#include<QPixmap>
#include <QImage>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();


signals:
    void ShowWIFIPic_SIG();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();

    void ShowWIFIPic_SLOT();
    void on_pushButton_7_clicked();

private:
    Ui::Widget *ui;
    int id;
    QIcon *picon;
    int count;
    QString Temp ;
    QString Humi ;
    QImage *pimage;
    bool t1;bool t2;
protected:
    //重写定时事件处理函数
    void timerEvent(QTimerEvent *e);
};

#endif // WIDGET_H
