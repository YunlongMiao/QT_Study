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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *mainLineEdit;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *clearButton;
    QPushButton *addButton;
    QPushButton *subButton;
    QPushButton *delButton;
    QPushButton *sevenButton;
    QPushButton *eitherButton;
    QPushButton *nineButton;
    QPushButton *mulButton;
    QPushButton *fourButton;
    QPushButton *fiveButton;
    QPushButton *sixButton;
    QPushButton *divButton;
    QPushButton *oneButton;
    QPushButton *twoButton;
    QPushButton *threeButton;
    QPushButton *leftButton;
    QPushButton *zeroButton;
    QPushButton *rightButton;
    QPushButton *equalButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(243, 347);
        mainLineEdit = new QLineEdit(Widget);
        mainLineEdit->setObjectName("mainLineEdit");
        mainLineEdit->setGeometry(QRect(10, 0, 221, 51));
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 60, 223, 280));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        clearButton = new QPushButton(widget);
        clearButton->setObjectName("clearButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy);
        clearButton->setMinimumSize(QSize(50, 50));
        clearButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(clearButton, 0, 0, 1, 1);

        addButton = new QPushButton(widget);
        addButton->setObjectName("addButton");
        sizePolicy.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy);
        addButton->setMinimumSize(QSize(50, 50));
        addButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(addButton, 0, 1, 1, 1);

        subButton = new QPushButton(widget);
        subButton->setObjectName("subButton");
        sizePolicy.setHeightForWidth(subButton->sizePolicy().hasHeightForWidth());
        subButton->setSizePolicy(sizePolicy);
        subButton->setMinimumSize(QSize(50, 50));
        subButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(subButton, 0, 2, 1, 1);

        delButton = new QPushButton(widget);
        delButton->setObjectName("delButton");
        sizePolicy.setHeightForWidth(delButton->sizePolicy().hasHeightForWidth());
        delButton->setSizePolicy(sizePolicy);
        delButton->setMinimumSize(QSize(50, 50));
        delButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(delButton, 0, 3, 1, 1);

        sevenButton = new QPushButton(widget);
        sevenButton->setObjectName("sevenButton");
        sizePolicy.setHeightForWidth(sevenButton->sizePolicy().hasHeightForWidth());
        sevenButton->setSizePolicy(sizePolicy);
        sevenButton->setMinimumSize(QSize(50, 50));
        sevenButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(sevenButton, 1, 0, 1, 1);

        eitherButton = new QPushButton(widget);
        eitherButton->setObjectName("eitherButton");
        sizePolicy.setHeightForWidth(eitherButton->sizePolicy().hasHeightForWidth());
        eitherButton->setSizePolicy(sizePolicy);
        eitherButton->setMinimumSize(QSize(50, 50));
        eitherButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(eitherButton, 1, 1, 1, 1);

        nineButton = new QPushButton(widget);
        nineButton->setObjectName("nineButton");
        sizePolicy.setHeightForWidth(nineButton->sizePolicy().hasHeightForWidth());
        nineButton->setSizePolicy(sizePolicy);
        nineButton->setMinimumSize(QSize(50, 50));
        nineButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(nineButton, 1, 2, 1, 1);

        mulButton = new QPushButton(widget);
        mulButton->setObjectName("mulButton");
        sizePolicy.setHeightForWidth(mulButton->sizePolicy().hasHeightForWidth());
        mulButton->setSizePolicy(sizePolicy);
        mulButton->setMinimumSize(QSize(50, 50));
        mulButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(mulButton, 1, 3, 1, 1);

        fourButton = new QPushButton(widget);
        fourButton->setObjectName("fourButton");
        sizePolicy.setHeightForWidth(fourButton->sizePolicy().hasHeightForWidth());
        fourButton->setSizePolicy(sizePolicy);
        fourButton->setMinimumSize(QSize(50, 50));
        fourButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(fourButton, 2, 0, 1, 1);

        fiveButton = new QPushButton(widget);
        fiveButton->setObjectName("fiveButton");
        sizePolicy.setHeightForWidth(fiveButton->sizePolicy().hasHeightForWidth());
        fiveButton->setSizePolicy(sizePolicy);
        fiveButton->setMinimumSize(QSize(50, 50));
        fiveButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(fiveButton, 2, 1, 1, 1);

        sixButton = new QPushButton(widget);
        sixButton->setObjectName("sixButton");
        sizePolicy.setHeightForWidth(sixButton->sizePolicy().hasHeightForWidth());
        sixButton->setSizePolicy(sizePolicy);
        sixButton->setMinimumSize(QSize(50, 50));
        sixButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(sixButton, 2, 2, 1, 1);

        divButton = new QPushButton(widget);
        divButton->setObjectName("divButton");
        sizePolicy.setHeightForWidth(divButton->sizePolicy().hasHeightForWidth());
        divButton->setSizePolicy(sizePolicy);
        divButton->setMinimumSize(QSize(50, 50));
        divButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(divButton, 2, 3, 1, 1);

        oneButton = new QPushButton(widget);
        oneButton->setObjectName("oneButton");
        sizePolicy.setHeightForWidth(oneButton->sizePolicy().hasHeightForWidth());
        oneButton->setSizePolicy(sizePolicy);
        oneButton->setMinimumSize(QSize(50, 50));
        oneButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(oneButton, 3, 0, 1, 1);

        twoButton = new QPushButton(widget);
        twoButton->setObjectName("twoButton");
        sizePolicy.setHeightForWidth(twoButton->sizePolicy().hasHeightForWidth());
        twoButton->setSizePolicy(sizePolicy);
        twoButton->setMinimumSize(QSize(50, 50));
        twoButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(twoButton, 3, 1, 1, 1);

        threeButton = new QPushButton(widget);
        threeButton->setObjectName("threeButton");
        sizePolicy.setHeightForWidth(threeButton->sizePolicy().hasHeightForWidth());
        threeButton->setSizePolicy(sizePolicy);
        threeButton->setMinimumSize(QSize(50, 50));
        threeButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(threeButton, 3, 2, 1, 1);

        leftButton = new QPushButton(widget);
        leftButton->setObjectName("leftButton");
        sizePolicy.setHeightForWidth(leftButton->sizePolicy().hasHeightForWidth());
        leftButton->setSizePolicy(sizePolicy);
        leftButton->setMinimumSize(QSize(50, 50));
        leftButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(leftButton, 4, 0, 1, 1);

        zeroButton = new QPushButton(widget);
        zeroButton->setObjectName("zeroButton");
        sizePolicy.setHeightForWidth(zeroButton->sizePolicy().hasHeightForWidth());
        zeroButton->setSizePolicy(sizePolicy);
        zeroButton->setMinimumSize(QSize(50, 50));
        zeroButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(zeroButton, 4, 1, 1, 1);

        rightButton = new QPushButton(widget);
        rightButton->setObjectName("rightButton");
        sizePolicy.setHeightForWidth(rightButton->sizePolicy().hasHeightForWidth());
        rightButton->setSizePolicy(sizePolicy);
        rightButton->setMinimumSize(QSize(50, 50));
        rightButton->setMaximumSize(QSize(50, 50));

        gridLayout->addWidget(rightButton, 4, 2, 1, 1);

        equalButton = new QPushButton(widget);
        equalButton->setObjectName("equalButton");
        sizePolicy.setHeightForWidth(equalButton->sizePolicy().hasHeightForWidth());
        equalButton->setSizePolicy(sizePolicy);
        equalButton->setMinimumSize(QSize(50, 50));
        equalButton->setMaximumSize(QSize(50, 110));

        gridLayout->addWidget(equalButton, 3, 3, 2, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        clearButton->setText(QCoreApplication::translate("Widget", "C", nullptr));
        addButton->setText(QCoreApplication::translate("Widget", "+", nullptr));
        subButton->setText(QCoreApplication::translate("Widget", "-", nullptr));
        delButton->setText(QCoreApplication::translate("Widget", "\342\206\220", nullptr));
        sevenButton->setText(QCoreApplication::translate("Widget", "7", nullptr));
        eitherButton->setText(QCoreApplication::translate("Widget", "8", nullptr));
        nineButton->setText(QCoreApplication::translate("Widget", "9", nullptr));
        mulButton->setText(QCoreApplication::translate("Widget", "*", nullptr));
        fourButton->setText(QCoreApplication::translate("Widget", "4", nullptr));
        fiveButton->setText(QCoreApplication::translate("Widget", "5", nullptr));
        sixButton->setText(QCoreApplication::translate("Widget", "6", nullptr));
        divButton->setText(QCoreApplication::translate("Widget", "/", nullptr));
        oneButton->setText(QCoreApplication::translate("Widget", "1", nullptr));
        twoButton->setText(QCoreApplication::translate("Widget", "2", nullptr));
        threeButton->setText(QCoreApplication::translate("Widget", "3", nullptr));
        leftButton->setText(QCoreApplication::translate("Widget", "(", nullptr));
        zeroButton->setText(QCoreApplication::translate("Widget", "0", nullptr));
        rightButton->setText(QCoreApplication::translate("Widget", ")", nullptr));
        equalButton->setText(QCoreApplication::translate("Widget", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
