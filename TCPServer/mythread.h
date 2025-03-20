#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include <QThread>
#include <QTcpSocket>
#include <qdebug.h>

//class myThread : public QObject, public QThread
class myThread : public QThread
{
    Q_OBJECT
public:
    //explicit myThread(QTcpSocket *s,QObject *parent = nullptr);
    explicit myThread(QTcpSocket *s);
    void run(); //继承自QThread的虚函数        线程处理函数

signals:
private slots:
    void TcpInfoThreadSlots();

private:
    QTcpSocket *socket_t;
};

#endif // MYTHREAD_H
