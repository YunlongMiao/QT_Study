#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    server = new QTcpServer;

    server->listen(QHostAddress::AnyIPv4,PORT);

    //客户端发起连接，server发出信号
    connect(server,&QTcpServer::newConnection,this,&Widget::TcpServerSlots);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::TcpServerSlots()
{
    QTcpSocket* socket = server->nextPendingConnection();

    // socket->peerAddress();  //客户端地址  hostadress类型
    // socket->peerPort();     //客户端端口号 u16类型

    ui->Iplineedit->setText(socket->peerAddress().toString());
    ui->Portlieedit->setText(QString::number(socket->peerPort()));

    //服务器收到客户端发送的信息，socket发出readyRead信号
    //多线程注释
    // connect(socket,&QTcpSocket::readyRead,this,&Widget::TcpInfoSlots);

    //启动线程
    myThread *t = new myThread(socket); //创建线程对象
    t->start();                 //启动线程

    connect(t,&myThread::SendThreadSign,this,&Widget::ThreadSlots);
}


//多线程注释

// void Widget::TcpInfoSlots()
// {
//     //获取信号发出者
//     QTcpSocket *s = (QTcpSocket*)sender();

//     ui->MainlineEdit->setText(QString(s->readAll()));
// }


void Widget::ThreadSlots(QByteArray a)
{
    ui->MainlineEdit->setText(QString(a));
}
