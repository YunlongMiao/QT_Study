#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimerEvent>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QComboBox>
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
    void on_KeyButton_clicked();

    void on_SendButton_clicked();

    void RXDataRead();

private:
    Ui::Widget *ui;

    void timeEvent(QTimerEvent *timex);
    void refreshUsartPort();
    void readUsartConfig();
    void RX_Usart_info();
    void TX_Usart_info();


    bool keyFlag;
    int RefreshTimeId;

    QSerialPort *serial;

    QVector<QString>ports;

    QString port;
    QSerialPort::BaudRate Baud;     //波特率
    QSerialPort::DataBits Data;     //数据位
    QSerialPort::StopBits Stop;     //停止位
    QSerialPort::Parity Check;      //校验位
};
#endif // WIDGET_H
