#include "chat.h"
#include "ui_chat.h"
#include <QDebug>
Chat::Chat(QTcpSocket *s, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Chat)
{
    ui->setupUi(this);

    socket = s;
}

Chat::~Chat()
{
    delete ui;
}

void Chat::on_CleaButton_clicked()
{
    ui->lineEdit->clear();
}


void Chat::on_SendButton_clicked()
{
    QByteArray ba;
    ba.append(ui->lineEdit->text().toUtf8());
    // qDebug()<<ui->lineEdit->text().toUtf8();
    // qDebug()<<ui->lineEdit->text();
    // qDebug()<<ba.append(ui->lineEdit->text().toUtf8());
    socket->write(ba);
}

