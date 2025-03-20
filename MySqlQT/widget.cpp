#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //输出可用数据库
    // qDebug()<<"available drivers:";
    // QStringList drivers = QSqlDatabase::drivers();
    // foreach(QString driver, drivers)
    //     qDebug()<<driver;

    //连接数据库
    db = QSqlDatabase::addDatabase("QMYSQL"); //加载MYSQL数据库驱动

    db.setDatabaseName("mydatabase");
    db.setPort(3306);
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("141510");

    if(db.open())
    {
        QMessageBox::information(this,"连接提示","连接成功");
    }else{
        QMessageBox::information(this,"连接提示","连接失败");
    }

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_InsertButton_clicked()
{
    QString id = ui->IdlineEdit->text();
    QString name = ui->NamelineEdit->text();
    QString birth = ui->BirthlineEdit->text();

    QString sql = QString("insert into student values (%1,'%2','%3');").arg(id).arg(name).arg(birth);

    QSqlQuery query;
    if(query.exec(sql)){
        QMessageBox::information(this,"插入提示","插入成功");
    }else{
        QMessageBox::information(this,"插入提示","插入成功");
    }
}


void Widget::on_FindButton_clicked()
{
    QSqlQuery query;
    query.exec("select * from student;");

    while(query.next())
    {
        qDebug()<<query.value(0);
        qDebug()<<query.value(1);
        qDebug()<<query.value(2);
    }
}

