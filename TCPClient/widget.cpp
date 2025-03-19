#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    socket = new QTcpSocket;    //创建socket对象
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_CancelButton_clicked()
{
    this->close();
}


void Widget::on_ConnectButton_clicked()
{
    //获取ip和port
    QString Ip = ui->IPlineEdit->text();
    QString Port = ui->PortlineEdit->text();


    //连接服务器
    //使用IP构造QHostAddress对象(QHostAddress为connectToHost形参)
    //QString使用toShort转换类型
    socket->connectToHost(QHostAddress(Ip),Port.toShort());


    //连接服务器成功,socket对象会发出信号
    connect(socket,&QTcpSocket::connected,[this]()
    {
        QMessageBox::information(this,"连接提示","链接服务器成功");
    });


    //连接断开,socket也会发出信号
    connect(socket,&QTcpSocket::disconnected,[this]()
    {
        QMessageBox::information(this,"连接提示","连接断开");
    });
}

