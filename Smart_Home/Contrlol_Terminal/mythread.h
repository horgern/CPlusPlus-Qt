#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>

class mythread : public QThread
{
    Q_OBJECT
public:
    explicit mythread(QObject *parent = 0);


signals:
    void sig_get_network();

    void show_sig(QString str);
    void recvFM_sig(QString str);
    void UserData_SIG(QString str);
public slots:


private:
    int count;
    QString temp;
    QString Temp_CommonStr;
protected:
    void run();
    void DataFromMachine();
};

#endif // MYTHREAD_H
