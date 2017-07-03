#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->pbtStartLap, &QPushButton::clicked, this, &MainWindow::start);

    QObject::connect(&timer, &QTimer::timeout, this, &MainWindow::updateTimer);

}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::start(){
    time = new QTime(0, 0);
    time->start();
    timer.start(1000);
}

void MainWindow::stop(){
    timer.stop();
}

void MainWindow::lap(){

}

void MainWindow::updateTimer(){
    ui->lblTimer->setText(QTime(0, 0).addMSecs(time->elapsed()).toString());
}
