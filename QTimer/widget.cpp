#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    timer = new QTimer;

    timeFlag = -1;
    picID = 2;

    QImage img;
    img.load(QCoreApplication::applicationDirPath() + "\\Picture\\纯色图像1.jpg");
    ui->label->setPixmap(QPixmap::fromImage(img));

    connect(timer,&QTimer::timeout,this,&Widget::timeOutslot);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_StartButton_clicked()
{
    timer->start(TIME_OUT);
}


void Widget::timeOutslot()
{
    QString path(QCoreApplication::applicationDirPath() + "\\Picture\\纯色图像");
    path += QString::number(picID);
    path += ".jpg";

    QImage img;
    img.load(path);
    ui->label->setPixmap(QPixmap::fromImage(img));
    picID++;

    if(picID >= 8)
        picID = 1;
}

void Widget::on_PauseButton_clicked()
{
    timer->stop();
}


void Widget::on_SignalButton_clicked()
{
    QTimer::singleShot(1000,this,SLOT(timeOutslot()));
}

