#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QTcpSocket>
#include <QHostAddress>
#include <QMessageBox>

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

private slots:
    void on_CancelButton_clicked();

    void on_ConnectButton_clicked();

private:
    Ui::Widget *ui;

    QTcpSocket *socket;
};
#endif // WIDGET_H
