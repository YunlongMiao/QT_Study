/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *IPlineEdit;
    QLineEdit *PortlineEdit;
    QPushButton *ConnectButton;
    QPushButton *CancelButton_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(645, 533);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(210, 100, 141, 61));
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 190, 181, 41));
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(60, 260, 221, 71));
        IPlineEdit = new QLineEdit(Widget);
        IPlineEdit->setObjectName("IPlineEdit");
        IPlineEdit->setGeometry(QRect(280, 190, 211, 41));
        PortlineEdit = new QLineEdit(Widget);
        PortlineEdit->setObjectName("PortlineEdit");
        PortlineEdit->setGeometry(QRect(280, 280, 211, 41));
        ConnectButton = new QPushButton(Widget);
        ConnectButton->setObjectName("ConnectButton");
        ConnectButton->setGeometry(QRect(100, 370, 141, 51));
        CancelButton_2 = new QPushButton(Widget);
        CancelButton_2->setObjectName("CancelButton_2");
        CancelButton_2->setGeometry(QRect(320, 370, 141, 51));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">TCP\345\256\242\346\210\267\347\253\257</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200IP:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">\346\234\215\345\212\241\345\231\250\347\253\257\345\217\243\345\217\267\357\274\232</span></p></body></html>", nullptr));
        ConnectButton->setText(QCoreApplication::translate("Widget", "\350\277\236\346\216\245", nullptr));
        CancelButton_2->setText(QCoreApplication::translate("Widget", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
