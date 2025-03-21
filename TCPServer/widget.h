#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTcpServer>
#include <QTcpSocket>
#include "mythread.h"

#define PORT 8000

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QTcpServer *server; //服务器对象

private slots:
    void TcpServerSlots();
    //void TcpInfoSlots();
    void ThreadSlots(QByteArray b);
};
#endif // WIDGET_H
