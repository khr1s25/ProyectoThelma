#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    se = new MenuSecre();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_enter_clicked()
{
    emit loginValidation(ui->user->text(),ui->password->text());
}

void MainWindow::on_password_returnPressed()
{
    if(ui->user->text().length() > 0 & ui->password->text().length() > 0){
        emit loginValidation(ui->user->text(),ui->password->text());
    }
}
