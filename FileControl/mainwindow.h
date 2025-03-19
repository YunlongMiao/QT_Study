#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void keyPressEvent(QKeyEvent *k);
    void mousePressEvent(QMouseEvent *k);


private slots:
    void NewActionSlot();
    void OpenActionSlot();
    void SaveActionSlot();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
