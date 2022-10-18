/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *edit_message;
    QPushButton *btn_send;
    QLineEdit *edit_address;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *edit_name;
    QPushButton *btn_register;
    QListWidget *list_text_view;
    QMenuBar *menuBar;
    QMenu *menuKJ_Chat;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(504, 319);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        edit_message = new QLineEdit(centralWidget);
        edit_message->setObjectName(QString::fromUtf8("edit_message"));
        edit_message->setGeometry(QRect(10, 230, 391, 22));
        btn_send = new QPushButton(centralWidget);
        btn_send->setObjectName(QString::fromUtf8("btn_send"));
        btn_send->setGeometry(QRect(410, 230, 80, 22));
        edit_address = new QLineEdit(centralWidget);
        edit_address->setObjectName(QString::fromUtf8("edit_address"));
        edit_address->setGeometry(QRect(50, 10, 151, 22));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 59, 14));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 10, 71, 16));
        edit_name = new QLineEdit(centralWidget);
        edit_name->setObjectName(QString::fromUtf8("edit_name"));
        edit_name->setGeometry(QRect(290, 10, 111, 22));
        btn_register = new QPushButton(centralWidget);
        btn_register->setObjectName(QString::fromUtf8("btn_register"));
        btn_register->setGeometry(QRect(410, 10, 80, 22));
        list_text_view = new QListWidget(centralWidget);
        list_text_view->setObjectName(QString::fromUtf8("list_text_view"));
        list_text_view->setGeometry(QRect(10, 41, 481, 181));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 504, 19));
        menuKJ_Chat = new QMenu(menuBar);
        menuKJ_Chat->setObjectName(QString::fromUtf8("menuKJ_Chat"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuKJ_Chat->menuAction());

        retranslateUi(MainWindow);
        QObject::connect(btn_send, SIGNAL(pressed()), edit_address, SLOT(copy()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        btn_send->setText(QApplication::translate("MainWindow", " \354\240\204 \354\206\241 ", 0));
        label->setText(QApplication::translate("MainWindow", "\354\243\274 \354\206\214: ", 0));
        label_2->setText(QApplication::translate("MainWindow", "\354\202\254\354\232\251\354\236\220 \354\235\264\353\246\204 : ", 0));
        btn_register->setText(QApplication::translate("MainWindow", "\353\223\261 \353\241\235", 0));
        menuKJ_Chat->setTitle(QApplication::translate("MainWindow", "KimokJin Chat Chat", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
