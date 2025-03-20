#include "mythread.h"

//myThread::myThread(QTcpSocket *s, QObject *parent) : QObject{parent}
myThread::myThread(QTcpSocket *s)
{
    socket_t = s;
}



void myThread::run()
{
    connect(socket_t,&QTcpSocket::readyRead,this,&myThread::TcpInfoThreadSlots);
}

//不能再其它类里面操作界面
void myThread::TcpInfoThreadSlots()
{
    qDebug() << socket_t->readAll();
}
