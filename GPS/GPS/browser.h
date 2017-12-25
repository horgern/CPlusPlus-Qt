#ifndef BROWSER_H
#define BROWSER_H

#include <QDialog>
#include <QWebView>
#include<mythread.h>
namespace Ui {
class browser;
}

class browser : public QDialog
{
    Q_OBJECT

public:
    explicit browser(QWidget *parent = 0);
    ~browser();
private slots:


    void slot_browser_looking();
    void closeEvent(QCloseEvent * event);
    void mousePressEvent(QMouseEvent * ev);
    void mouseMoveEvent(QMouseEvent * ev);
private:
    Ui::browser *ui;
    browser * pbrowser;//将本地对象暴露给javascript的对象
    QWebView *view;
    QWebPage * page;
    mythread * pthread;
};

#endif // BROWSER_H
