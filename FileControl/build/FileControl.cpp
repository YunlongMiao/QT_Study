#include "widget.h"

#include <QApplication>

//文件测试写入

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}
