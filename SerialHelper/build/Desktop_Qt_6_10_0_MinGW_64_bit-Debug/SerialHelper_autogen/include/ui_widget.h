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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPlainTextEdit *RXtextEdit;
    QPlainTextEdit *TXtextEdit;
    QPushButton *pushButton;
    QCheckBox *checkBox;
    QCheckBox *HexSendBox;
    QCheckBox *checkBox_3;
    QLineEdit *SendTimelineEdit;
    QLabel *label;
    QLabel *label_2;
    QPushButton *SendButton;
    QPushButton *ClearTXButton;
    QLineEdit *FileNamelineEdit;
    QPushButton *OpenFileButton;
    QPushButton *SendFileButton;
    QPushButton *StopSendButton;
    QComboBox *BuardcomboBox;
    QComboBox *StopBitcomboBox;
    QComboBox *CheckcomboBox;
    QComboBox *DataBitcomboBox;
    QComboBox *SerialcomboBox;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *KeyButton;
    QPushButton *SaveButton;
    QPushButton *ClearRXButton;
    QCheckBox *HexRxBox;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QLineEdit *RxTimelineEdit;
    QLabel *label_9;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        RXtextEdit = new QPlainTextEdit(Widget);
        RXtextEdit->setObjectName("RXtextEdit");
        RXtextEdit->setGeometry(QRect(10, 20, 571, 341));
        TXtextEdit = new QPlainTextEdit(Widget);
        TXtextEdit->setObjectName("TXtextEdit");
        TXtextEdit->setGeometry(QRect(10, 410, 661, 91));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 370, 93, 28));
        checkBox = new QCheckBox(Widget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(30, 520, 98, 23));
        HexSendBox = new QCheckBox(Widget);
        HexSendBox->setObjectName("HexSendBox");
        HexSendBox->setGeometry(QRect(30, 550, 101, 23));
        checkBox_3 = new QCheckBox(Widget);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(130, 550, 98, 23));
        SendTimelineEdit = new QLineEdit(Widget);
        SendTimelineEdit->setObjectName("SendTimelineEdit");
        SendTimelineEdit->setGeometry(QRect(170, 520, 61, 21));
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 520, 69, 19));
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(220, 520, 69, 19));
        SendButton = new QPushButton(Widget);
        SendButton->setObjectName("SendButton");
        SendButton->setGeometry(QRect(680, 410, 101, 41));
        ClearTXButton = new QPushButton(Widget);
        ClearTXButton->setObjectName("ClearTXButton");
        ClearTXButton->setGeometry(QRect(680, 460, 101, 41));
        FileNamelineEdit = new QLineEdit(Widget);
        FileNamelineEdit->setObjectName("FileNamelineEdit");
        FileNamelineEdit->setGeometry(QRect(280, 520, 191, 25));
        OpenFileButton = new QPushButton(Widget);
        OpenFileButton->setObjectName("OpenFileButton");
        OpenFileButton->setGeometry(QRect(480, 520, 93, 28));
        SendFileButton = new QPushButton(Widget);
        SendFileButton->setObjectName("SendFileButton");
        SendFileButton->setGeometry(QRect(580, 520, 93, 28));
        StopSendButton = new QPushButton(Widget);
        StopSendButton->setObjectName("StopSendButton");
        StopSendButton->setGeometry(QRect(680, 520, 101, 28));
        BuardcomboBox = new QComboBox(Widget);
        BuardcomboBox->addItem(QString());
        BuardcomboBox->addItem(QString());
        BuardcomboBox->addItem(QString());
        BuardcomboBox->addItem(QString());
        BuardcomboBox->addItem(QString());
        BuardcomboBox->addItem(QString());
        BuardcomboBox->setObjectName("BuardcomboBox");
        BuardcomboBox->setGeometry(QRect(672, 80, 111, 25));
        StopBitcomboBox = new QComboBox(Widget);
        StopBitcomboBox->addItem(QString());
        StopBitcomboBox->addItem(QString());
        StopBitcomboBox->addItem(QString());
        StopBitcomboBox->setObjectName("StopBitcomboBox");
        StopBitcomboBox->setGeometry(QRect(672, 120, 111, 25));
        CheckcomboBox = new QComboBox(Widget);
        CheckcomboBox->addItem(QString());
        CheckcomboBox->addItem(QString());
        CheckcomboBox->addItem(QString());
        CheckcomboBox->setObjectName("CheckcomboBox");
        CheckcomboBox->setGeometry(QRect(672, 200, 111, 25));
        DataBitcomboBox = new QComboBox(Widget);
        DataBitcomboBox->addItem(QString());
        DataBitcomboBox->addItem(QString());
        DataBitcomboBox->addItem(QString());
        DataBitcomboBox->addItem(QString());
        DataBitcomboBox->setObjectName("DataBitcomboBox");
        DataBitcomboBox->setGeometry(QRect(672, 160, 111, 25));
        SerialcomboBox = new QComboBox(Widget);
        SerialcomboBox->setObjectName("SerialcomboBox");
        SerialcomboBox->setGeometry(QRect(590, 40, 191, 25));
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(590, 20, 69, 19));
        label_4 = new QLabel(Widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(600, 80, 69, 19));
        label_5 = new QLabel(Widget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(600, 120, 69, 19));
        label_6 = new QLabel(Widget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(600, 160, 69, 19));
        label_7 = new QLabel(Widget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(600, 200, 69, 19));
        label_8 = new QLabel(Widget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(600, 240, 69, 19));
        KeyButton = new QPushButton(Widget);
        KeyButton->setObjectName("KeyButton");
        KeyButton->setGeometry(QRect(670, 240, 111, 28));
        SaveButton = new QPushButton(Widget);
        SaveButton->setObjectName("SaveButton");
        SaveButton->setGeometry(QRect(590, 280, 93, 28));
        ClearRXButton = new QPushButton(Widget);
        ClearRXButton->setObjectName("ClearRXButton");
        ClearRXButton->setGeometry(QRect(700, 280, 93, 28));
        HexRxBox = new QCheckBox(Widget);
        HexRxBox->setObjectName("HexRxBox");
        HexRxBox->setGeometry(QRect(600, 320, 98, 23));
        checkBox_5 = new QCheckBox(Widget);
        checkBox_5->setObjectName("checkBox_5");
        checkBox_5->setGeometry(QRect(700, 320, 98, 23));
        checkBox_6 = new QCheckBox(Widget);
        checkBox_6->setObjectName("checkBox_6");
        checkBox_6->setGeometry(QRect(600, 350, 98, 23));
        checkBox_7 = new QCheckBox(Widget);
        checkBox_7->setObjectName("checkBox_7");
        checkBox_7->setGeometry(QRect(600, 380, 98, 23));
        checkBox_8 = new QCheckBox(Widget);
        checkBox_8->setObjectName("checkBox_8");
        checkBox_8->setGeometry(QRect(700, 350, 98, 23));
        RxTimelineEdit = new QLineEdit(Widget);
        RxTimelineEdit->setObjectName("RxTimelineEdit");
        RxTimelineEdit->setGeometry(QRect(700, 380, 51, 21));
        label_9 = new QLabel(Widget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(740, 380, 69, 19));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\345\215\225\346\235\241\345\217\221\351\200\201", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
        HexSendBox->setText(QCoreApplication::translate("Widget", "HEX\345\217\221\351\200\201", nullptr));
        checkBox_3->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\346\226\260\350\241\214", nullptr));
        SendTimelineEdit->setText(QString());
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\345\221\250\346\234\237\357\274\232</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">ms</p></body></html>", nullptr));
        SendButton->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        ClearTXButton->setText(QCoreApplication::translate("Widget", "\346\270\205\351\231\244\345\217\221\351\200\201", nullptr));
        OpenFileButton->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
        SendFileButton->setText(QCoreApplication::translate("Widget", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
        StopSendButton->setText(QCoreApplication::translate("Widget", "\345\201\234\346\255\242\345\217\221\351\200\201", nullptr));
        BuardcomboBox->setItemText(0, QCoreApplication::translate("Widget", "1200", nullptr));
        BuardcomboBox->setItemText(1, QCoreApplication::translate("Widget", "2400", nullptr));
        BuardcomboBox->setItemText(2, QCoreApplication::translate("Widget", "4800", nullptr));
        BuardcomboBox->setItemText(3, QCoreApplication::translate("Widget", "9600", nullptr));
        BuardcomboBox->setItemText(4, QCoreApplication::translate("Widget", "19200", nullptr));
        BuardcomboBox->setItemText(5, QCoreApplication::translate("Widget", "115200", nullptr));

        StopBitcomboBox->setItemText(0, QCoreApplication::translate("Widget", "1", nullptr));
        StopBitcomboBox->setItemText(1, QCoreApplication::translate("Widget", "1.5", nullptr));
        StopBitcomboBox->setItemText(2, QCoreApplication::translate("Widget", "2", nullptr));

        CheckcomboBox->setItemText(0, QCoreApplication::translate("Widget", "None", nullptr));
        CheckcomboBox->setItemText(1, QCoreApplication::translate("Widget", "Add", nullptr));
        CheckcomboBox->setItemText(2, QCoreApplication::translate("Widget", "Even", nullptr));

        DataBitcomboBox->setItemText(0, QCoreApplication::translate("Widget", "8", nullptr));
        DataBitcomboBox->setItemText(1, QCoreApplication::translate("Widget", "7", nullptr));
        DataBitcomboBox->setItemText(2, QCoreApplication::translate("Widget", "6", nullptr));
        DataBitcomboBox->setItemText(3, QCoreApplication::translate("Widget", "5", nullptr));

        label_3->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\344\270\262\345\217\243\351\200\211\346\213\251</p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\346\263\242\347\211\271\347\216\207</p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\345\201\234\346\255\242\344\275\215</p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\346\225\260\346\215\256\344\275\215</p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\346\240\241\351\252\214\344\275\215</p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">\344\270\262\345\217\243\346\223\215\344\275\234</p></body></html>", nullptr));
        KeyButton->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        SaveButton->setText(QCoreApplication::translate("Widget", "\344\277\235\345\255\230\347\252\227\345\217\243", nullptr));
        ClearRXButton->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\216\245\346\224\266", nullptr));
        HexRxBox->setText(QCoreApplication::translate("Widget", "HEX\346\230\276\347\244\272", nullptr));
        checkBox_5->setText(QCoreApplication::translate("Widget", "\350\207\252\345\212\250\344\277\235\345\255\230", nullptr));
        checkBox_6->setText(QCoreApplication::translate("Widget", "DTR", nullptr));
        checkBox_7->setText(QCoreApplication::translate("Widget", "\346\227\266\351\227\264\346\210\263", nullptr));
        checkBox_8->setText(QCoreApplication::translate("Widget", "RTS", nullptr));
        RxTimelineEdit->setText(QString());
        label_9->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\">ms</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
