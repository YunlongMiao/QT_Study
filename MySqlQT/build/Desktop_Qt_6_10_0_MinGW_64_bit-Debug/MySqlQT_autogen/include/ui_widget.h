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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *InsertButton;
    QPushButton *FindButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *NamelineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *IdlineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *BirthlineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(243, 191);
        InsertButton = new QPushButton(Widget);
        InsertButton->setObjectName("InsertButton");
        InsertButton->setGeometry(QRect(10, 150, 93, 28));
        FindButton = new QPushButton(Widget);
        FindButton->setObjectName("FindButton");
        FindButton->setGeometry(QRect(130, 150, 93, 28));
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 218, 97));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        NamelineEdit = new QLineEdit(widget);
        NamelineEdit->setObjectName("NamelineEdit");

        horizontalLayout->addWidget(NamelineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        IdlineEdit = new QLineEdit(widget);
        IdlineEdit->setObjectName("IdlineEdit");

        horizontalLayout_2->addWidget(IdlineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        BirthlineEdit = new QLineEdit(widget);
        BirthlineEdit->setObjectName("BirthlineEdit");

        horizontalLayout_3->addWidget(BirthlineEdit);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        InsertButton->setText(QCoreApplication::translate("Widget", "\346\217\222\345\205\245", nullptr));
        FindButton->setText(QCoreApplication::translate("Widget", "\346\237\245\350\257\242", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\345\247\223\345\220\215</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\345\255\246\345\217\267</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">\347\224\237\346\227\245</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
