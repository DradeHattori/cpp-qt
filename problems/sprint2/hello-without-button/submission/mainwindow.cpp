#include "mainwindow.h"

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_line_name_input_textChanged(const QString &arg1)
{
    QString result;
    if (arg1.isEmpty()) {
        result = "Введите имя";
    }
    else {
        result = "Привет из Qt, " + arg1 + "!";
    }
    ui->lbl_result->setText(result);
}

