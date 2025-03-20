#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

    db.setHostName("localhost");
    db.setDatabaseName("mydatabase02");
    db.setUserName("test1");
    db.setPassword("123456");

    if(db.open()){
        QMessageBox::information(this,"连接提示","连接成功");

        m = new QSqlTableModel;
        m->setTable("student");     //把模型和student表联系起来
        ui->tableView->setModel(m); //把界面模型和数据模型关联起来

    }else{
        QMessageBox::information(this,"连接提示","连接失败");
    }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    m->select();    //查询
}

