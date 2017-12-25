#include "browser.h"
#include "ui_browser.h"
#include <QWebView>
#include <QWebPage>
#include <QWebFrame>
#include <QtDebug>
#include <QLineEdit>
#include<QThread>
browser::browser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::browser)
{
    ui->setupUi(this);
    setWindowTitle("浏览器");
    setMinimumSize(800, 480);
    setMaximumSize(800, 480);
    view = new QWebView(this);
    view->load(QUrl("https://hao.360.cn/"));   //步骤2
    view->show();  //步骤3
    resize(view->size());

    page = view->page();

    //定义一个多线程管理者
    pthread = new mythread(this);
    //连接信号和槽
    connect(pthread,SIGNAL(sig_browser_looking()),
            this,SLOT(slot_browser_looking()));



    //启动多线程
    pthread->start();

}

browser::~browser()
{
    delete ui;
}



void browser::slot_browser_looking()
{
    //QUrl url = view->page()->mainFrame()->requestedUrl();
    //page->mainFrame()->addToJavaScriptWindowObject(selectedText(),page);
    //page->mainFrame()->evaluateJavaScript("myPluginObject.signalEmitted.connect(functionToCall);");

    //qDebug()<<"doLoad...."<<url;
    //qDebug()<<view->selectedText();
    //QThread::msleep(500);
    view->setPage(view->page());
    qDebug()<<"page";
}

void browser::closeEvent(QCloseEvent *event)
{
    disconnect(pthread,SIGNAL(sig_browser_looking()),
               this,SLOT(slot_browser_looking()));
    pthread->exit();
    qDebug()<<"closeBroserWindows";
}

void browser::mousePressEvent(QMouseEvent *ev)
{
    qDebug()<<"web";
    view->setPage(view->page());
    qDebug()<<"page";
}

void browser::mouseMoveEvent(QMouseEvent *ev)
{
    qDebug()<<"move";
}

