#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

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
    virtual void timerEvent(QTimerEvent *event);
    ~Widget();

private slots:
    void on_StartButton_clicked();

    void on_PauseButton_clicked();

private:
    Ui::Widget *ui;
    int myTimerId;  //定时器ID
    int PicId;      //图片顺序
    int TimerFlag;  //定时器数量限制
};
#endif // WIDGET_H
