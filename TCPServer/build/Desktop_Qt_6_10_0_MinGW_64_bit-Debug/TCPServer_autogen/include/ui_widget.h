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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *Iplineedit;
    QLineEdit *Portlieedit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *MainlineEdit;
    QLabel *label_4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(523, 342);
        Iplineedit = new QLineEdit(Widget);
        Iplineedit->setObjectName("Iplineedit");
        Iplineedit->setGeometry(QRect(220, 90, 221, 41));
        Portlieedit = new QLineEdit(Widget);
        Portlieedit->setObjectName("Portlieedit");
        Portlieedit->setGeometry(QRect(220, 170, 221, 41));
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 10, 101, 51));
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 90, 121, 41));
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 160, 171, 61));
        MainlineEdit = new QLineEdit(Widget);
        MainlineEdit->setObjectName("MainlineEdit");
        MainlineEdit->setGeometry(QRect(150, 250, 291, 41));
        label_4 = new QLabel(Widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 250, 131, 51));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\346\234\215\345\212\241\345\231\250</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\256\242\346\210\267\347\253\257IP</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\256\242\346\210\267\347\253\257\347\253\257\345\217\243\345\217\267</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\346\216\245\346\224\266\344\277\241\346\201\257\357\274\232</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
