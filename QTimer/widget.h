#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>

#define TIME_OUT 1 * 1000

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
    void on_StartButton_clicked();
    void timeOutslot();

    void on_PauseButton_clicked();

    void on_SignalButton_clicked();

private:
    Ui::Widget *ui;
    QTimer *timer;
    int picID;
    int timeFlag;
};
#endif // WIDGET_H
