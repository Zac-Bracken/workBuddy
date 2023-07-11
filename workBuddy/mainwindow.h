#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QLabel>
#include "timermodel.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void displayTimer();
    ~MainWindow();

private:
       QLabel *timerLabel;
       timerModel timerClass;
       struct timerModel::TimerData timerData;
       int seconds = 0;
       int hours = 0;
       int minutes = 0;
       QTimer *timer;
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
