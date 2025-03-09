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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *line_name_input;
    QLabel *lbl_hello;
    QLabel *lbl_result;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(340, 240);
        MainWindow->setMinimumSize(QSize(340, 240));
        MainWindow->setMaximumSize(QSize(340, 240));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        line_name_input = new QLineEdit(centralwidget);
        line_name_input->setObjectName("line_name_input");
        line_name_input->setGeometry(QRect(120, 90, 113, 26));
        lbl_hello = new QLabel(centralwidget);
        lbl_hello->setObjectName("lbl_hello");
        lbl_hello->setGeometry(QRect(110, 50, 131, 31));
        lbl_result = new QLabel(centralwidget);
        lbl_result->setObjectName("lbl_result");
        lbl_result->setGeometry(QRect(90, 130, 171, 31));
        lbl_result->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 340, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Hello Without Button", nullptr));
        lbl_hello->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">\320\232\320\260\320\272 \320\262\320\260\321\201 \320\267\320\276\320\262\321\203\321\202?</span></p></body></html>", nullptr));
        lbl_result->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
