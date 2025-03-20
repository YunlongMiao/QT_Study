#ifndef CHAT_H
#define CHAT_H

#include <QWidget>
#include <QTcpSocket>

namespace Ui {
class Chat;
}

class Chat : public QWidget
{
    Q_OBJECT

public:
    explicit Chat(QTcpSocket *s, QWidget *parent = nullptr);
    ~Chat();

private slots:
    void on_CleaButton_clicked();

    void on_SendButton_clicked();

private:
    Ui::Chat *ui;
    QTcpSocket *socket;
};

#endif // CHAT_H
