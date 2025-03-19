/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *NewAction;
    QAction *SaveAction;
    QAction *OpenAction;
    QAction *DelAction;
    QAction *actionDeBug;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_V;
    QMenu *menu_B;
    QMenu *menu_D;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        NewAction = new QAction(MainWindow);
        NewAction->setObjectName("NewAction");
        SaveAction = new QAction(MainWindow);
        SaveAction->setObjectName("SaveAction");
        OpenAction = new QAction(MainWindow);
        OpenAction->setObjectName("OpenAction");
        DelAction = new QAction(MainWindow);
        DelAction->setObjectName("DelAction");
        actionDeBug = new QAction(MainWindow);
        actionDeBug->setObjectName("actionDeBug");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        horizontalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName("menu_F");
        menu_E = new QMenu(menubar);
        menu_E->setObjectName("menu_E");
        menu_V = new QMenu(menubar);
        menu_V->setObjectName("menu_V");
        menu_B = new QMenu(menubar);
        menu_B->setObjectName("menu_B");
        menu_D = new QMenu(menubar);
        menu_D->setObjectName("menu_D");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_V->menuAction());
        menubar->addAction(menu_B->menuAction());
        menubar->addAction(menu_D->menuAction());
        menu_F->addAction(NewAction);
        menu_F->addAction(SaveAction);
        menu_F->addAction(OpenAction);
        menu_F->addAction(DelAction);
        menu_D->addAction(actionDeBug);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        NewAction->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272(&N)", nullptr));
        SaveAction->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", nullptr));
        OpenAction->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)", nullptr));
        DelAction->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244(&X)", nullptr));
        actionDeBug->setText(QCoreApplication::translate("MainWindow", "DeBug", nullptr));
        menu_F->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\357\274\210&F\357\274\211", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221\357\274\210&E\357\274\211", nullptr));
        menu_V->setTitle(QCoreApplication::translate("MainWindow", "\350\247\206\345\233\276(&V)", nullptr));
        menu_B->setTitle(QCoreApplication::translate("MainWindow", "\346\236\204\345\273\272(&B)", nullptr));
        menu_D->setTitle(QCoreApplication::translate("MainWindow", "\350\260\203\350\257\225(&D)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
