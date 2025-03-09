/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *text_greeting;
    QPushButton *button_hello;
    QLineEdit *line_input_name;
    QLabel *lbl_result;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(320, 240);
        MainWindow->setMinimumSize(QSize(320, 240));
        MainWindow->setMaximumSize(QSize(320, 240));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        text_greeting = new QLabel(centralwidget);
        text_greeting->setObjectName("text_greeting");
        text_greeting->setGeometry(QRect(100, 40, 121, 21));
        button_hello = new QPushButton(centralwidget);
        button_hello->setObjectName("button_hello");
        button_hello->setGeometry(QRect(110, 110, 93, 29));
        line_input_name = new QLineEdit(centralwidget);
        line_input_name->setObjectName("line_input_name");
        line_input_name->setGeometry(QRect(100, 70, 113, 26));
        lbl_result = new QLabel(centralwidget);
        lbl_result->setObjectName("lbl_result");
        lbl_result->setGeometry(QRect(30, 150, 251, 20));
        lbl_result->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 320, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Hello Button", nullptr));
        text_greeting->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">\320\232\320\260\320\272 \320\262\320\260\321\201 \320\267\320\276\320\262\321\203\321\202?</span></p></body></html>", nullptr));
        button_hello->setText(QCoreApplication::translate("MainWindow", "Hello", nullptr));
        lbl_result->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">0_0</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
