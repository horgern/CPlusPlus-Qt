#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>

class mythread : public QThread
{
    Q_OBJECT
public:
    explicit mythread(QObject *parent = 0);

signals:

    void sig_getpos(bool Flag);
    void sig_browser_looking();
public slots:

protected:
    void run();
private:

};

#endif // MYTHREAD_H
