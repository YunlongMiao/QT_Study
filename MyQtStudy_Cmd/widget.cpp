#include "widget.h"
#include "./ui_widget.h"
#include <QProcess>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //连接信号与槽 谁发出信号 发出什么信号 谁处理信号 怎么处理
    connect(ui->cmdLineEdit,SIGNAL(returnPressed()),this,SLOT(on_CommitButton_clicked()));

    connect(ui->CancelButton,&QPushButton::clicked,this,&Widget::on_CancelButton_clicked);

    connect(ui->BrowerButton,&QPushButton::clicked,[this]()
    {
        QMessageBox::information(this,"信息","点击浏览");
    });

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_CommitButton_clicked()
{
    //获取lineedit数据
    QString cmdString = ui->cmdLineEdit->text();
    //创建process对象
    QProcess *myProcess = new QProcess(this);

    myProcess->start(cmdString);
}

void Widget::on_CancelButton_clicked()
{
    this->close();
}

void Widget::on_BrowerButton_clicked()
{

}

