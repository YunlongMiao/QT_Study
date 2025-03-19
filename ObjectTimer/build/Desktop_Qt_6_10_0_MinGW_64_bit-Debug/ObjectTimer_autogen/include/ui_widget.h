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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *PictureLabel;
    QPushButton *StartButton;
    QPushButton *PauseButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        PictureLabel = new QLabel(Widget);
        PictureLabel->setObjectName("PictureLabel");
        PictureLabel->setGeometry(QRect(120, 60, 531, 291));
        PictureLabel->setScaledContents(true);
        StartButton = new QPushButton(Widget);
        StartButton->setObjectName("StartButton");
        StartButton->setGeometry(QRect(190, 390, 111, 51));
        PauseButton = new QPushButton(Widget);
        PauseButton->setObjectName("PauseButton");
        PauseButton->setGeometry(QRect(480, 390, 111, 51));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        PictureLabel->setText(QString());
        StartButton->setText(QCoreApplication::translate("Widget", "\345\274\200\345\247\213", nullptr));
        PauseButton->setText(QCoreApplication::translate("Widget", "\346\232\202\345\201\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
