#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QTimer>
#include <QDateTime>
#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QWidget *centralWidget = new QWidget(this);
    QGridLayout *gridLayout = new QGridLayout(centralWidget);
    timerLabel = new QLabel("25:00", this);

    gridLayout->addWidget(timerLabel, 0, 1);
    setCentralWidget(centralWidget);



    QTimer *timer = new QTimer(this);
           connect(timer, &QTimer::timeout, this, &MainWindow::displayTimer);
           timer->start(1000); // Update every 1 second



}

void MainWindow::displayTimer()
{


    timerData = timerClass.getTimerData();
    if (timerData.isDone) {
        timer->stop();
    }
    timerLabel->setText(timerData.minutesString + ":" + timerData.secondsString);
}
MainWindow::~MainWindow()
{
    delete ui;
}
