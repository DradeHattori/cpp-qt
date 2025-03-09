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

void MainWindow::on_button_hello_clicked()
{
    QString res_output = "Привет из Qt, " + ui->line_input_name->text() + "!";
    ui->lbl_result->setText(res_output);
}

