#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit->setText("hello in branch1");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit_2->setText("hello in branch2");
}

void MainWindow::on_pushButton_3_clicked()
{

}
