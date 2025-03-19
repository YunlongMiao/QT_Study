#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QFileDialog>
#include <QMessageBox>
#include <debug/debug.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //谁发出信号，发什么信号，谁来处理，怎么做
    connect(ui->NewAction,&QAction::triggered,this,&MainWindow::NewActionSlot);
    connect(ui->OpenAction,&QAction::triggered,this,&MainWindow::OpenActionSlot);
    connect(ui->SaveAction,&QAction::triggered,this,&MainWindow::SaveActionSlot);


}



MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::NewActionSlot()
{
    ui->textEdit->clear();
    this->setWindowTitle("新建文本文档.txt");
}


void MainWindow::OpenActionSlot()
{
    //获取文件名，项目所在路径
    QString FileName = QFileDialog::getOpenFileName(this,"选择一个文件",
                                                QCoreApplication::applicationFilePath(),
                                                "*.cpp"
                                                );
    if(FileName.isEmpty())
    {
        QMessageBox::warning(this,"警告","请选择一个文件");
    }else{

        //qDebug() << FileName;

        QFile file(FileName);
        file.open(QIODevice::ReadOnly);

        QByteArray ba = file.readAll();
        ui->textEdit->setText(QString(ba));

        file.close();

    }

}



void MainWindow::SaveActionSlot()
{
    QString FileName = QFileDialog::getSaveFileName(this,"选择一个文件",
                                                    QCoreApplication::applicationFilePath()
                                                    );

    if(FileName.isEmpty())
    {
        QMessageBox::warning(this,"警告","请选择一个文件");
    }else{

        QFile file(FileName);                       //按名打开
        file.open(QIODeviceBase::WriteOnly);        //只写模式  警告原因:有返回值
        QByteArray ba;
        QString FileDate = ui->textEdit->toPlainText();
        ba.append(FileDate.toUtf8());     //获取文本框中内容，并转换成QByteArray.    直接输入QString会报错
        file.write(ba);
        file.close();
    }
}


void MainWindow::keyPressEvent(QKeyEvent* k)
{
    if(k->modifiers() == Qt::ControlModifier && k->key() == Qt::Key_S)
    {
        qDebug() << "快捷键";
        SaveActionSlot();
    }
    qDebug() << "监听到，但没反应";
}


void MainWindow::mousePressEvent(QMouseEvent* m)
{
    QPoint pt = m->pos();
    qDebug() << pt;

    if(m->button() == Qt::LeftButton)
    {
        qDebug() << "LeftBotton";
    }
    if(m->button() == Qt::RightButton)
    {
        qDebug() << "RightBotton";
    }
}
