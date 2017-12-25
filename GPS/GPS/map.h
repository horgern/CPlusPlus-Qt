#ifndef MAP_H
#define MAP_H

#include <QDialog>
#include <QWebView>
namespace Ui {
class Map;
}

class Map : public QDialog
{
    Q_OBJECT

public:
    explicit Map(QWidget *parent = 0);
    ~Map();
protected:
    void resizeEvent(QResizeEvent * e);
private:
    Ui::Map *ui;
};

#endif // MAP_H
