#ifndef TOMATOTIMER_H
#define TOMATOTIMER_H

#include <QWidget>
#include <QLabel>
#include <timermodel.h>

class TomatoTimer : public QWidget
{
    Q_OBJECT

public:
    explicit TomatoTimer(QWidget *parent = nullptr);
    void displayTimer();


private:
    QLabel *timerLabel;
    timerModel timerClass;

    struct timerModel::TimerData timerData;
    int seconds = 0;
    int hours = 0;
    int minutes = 0;
    QTimer *timer;
};

#endif // CUSTOMWIDGET2_H
