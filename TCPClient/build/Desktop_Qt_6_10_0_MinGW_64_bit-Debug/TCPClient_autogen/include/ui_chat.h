/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chat
{
public:
    QLabel *label;
    QPushButton *SendButton;
    QPushButton *CleaButton;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Chat)
    {
        if (Chat->objectName().isEmpty())
            Chat->setObjectName("Chat");
        Chat->resize(808, 585);
        label = new QLabel(Chat);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 230, 171, 51));
        SendButton = new QPushButton(Chat);
        SendButton->setObjectName("SendButton");
        SendButton->setGeometry(QRect(380, 340, 121, 41));
        CleaButton = new QPushButton(Chat);
        CleaButton->setObjectName("CleaButton");
        CleaButton->setGeometry(QRect(160, 340, 131, 41));
        lineEdit = new QLineEdit(Chat);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(210, 230, 281, 51));

        retranslateUi(Chat);

        QMetaObject::connectSlotsByName(Chat);
    } // setupUi

    void retranslateUi(QWidget *Chat)
    {
        Chat->setWindowTitle(QCoreApplication::translate("Chat", "Form", nullptr));
        label->setText(QCoreApplication::translate("Chat", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\350\276\223\345\205\245\344\277\241\346\201\257\357\274\232</span></p></body></html>", nullptr));
        SendButton->setText(QCoreApplication::translate("Chat", "\345\217\221\351\200\201", nullptr));
        CleaButton->setText(QCoreApplication::translate("Chat", "\346\270\205\347\251\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chat: public Ui_Chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
