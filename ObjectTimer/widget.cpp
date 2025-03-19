#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    TimerFlag = -1;

    ui->setupUi(this);

    PicId = 2;
    //QPixmap pix("..//Picture//纯色图像1.jpg");

    // QPixmap pix("G:\\NewCode\\C\\QT\\ObjectTimer\\Picture\\纯色图像1.jpg");

    QPixmap pix(QCoreApplication::applicationDirPath() + "\\Picture\\纯色图像1.jpg");
    ui->PictureLabel->setPixmap(pix);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_StartButton_clicked()
{
    //开启定时器，返回定时器编号
    if(TimerFlag <= 0)
    {
        myTimerId = this->startTimer(TIME_OUT);
        TimerFlag ++;
    }
}

//超时进入
void Widget::timerEvent(QTimerEvent *event)
{
    if(event->timerId() != myTimerId)
        return;

    //QString path("..\\Picture\\纯色图像");

    //QString path("G:\\NewCode\\C\\QT\\ObjectTimer\\Picture\\纯色图像");
    QString path(QCoreApplication::applicationDirPath() + "\\Picture\\纯色图像");
    path += QString::number(PicId); //整数转字符串
    path += ".jpg";

    ui->PictureLabel->setPixmap(path);
    PicId++;

    if(PicId == 8)
        PicId = 1;
}

void Widget::on_PauseButton_clicked()
{
    if(TimerFlag >= 0)
    {
        this->killTimer(myTimerId);
        TimerFlag--;
    }
}

