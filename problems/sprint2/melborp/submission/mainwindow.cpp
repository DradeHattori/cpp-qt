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

QString Melborp(const QString& input) {
    QString result = "";
    for (const auto& symbol : input) {
        result = symbol + result;
    }
    return result;
}

void MainWindow::on_pb_melborp_clicked()
{
    QString result = Melborp(ui->ln_input_result->text());
    ui->ln_input_result->setText(result);
}

