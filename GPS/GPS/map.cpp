#include "map.h"
#include "ui_map.h"
#include <QWebView>
Map::Map(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Map)
{
    ui->setupUi(this);
    setWindowTitle("百度地图");
    QWebView *view = new QWebView(this);
    view->load(QUrl("http://map.baidu.com/"));   //步骤2
    view->show();  //步骤3
    resize(view->size());
}

Map::~Map()
{
    delete ui;
}

void Map::resizeEvent(QResizeEvent *e)
{




}


