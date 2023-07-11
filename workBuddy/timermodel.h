#ifndef TIMERMODEL_H
#define TIMERMODEL_H
#include <QString>
#include <QTimer>

class timerModel {
public:
    struct TimerData {
        QString secondsString;
        QString minutesString;
        bool isDone = false;
    };

    int seconds = 60;
    int minutes = 25;
    QTimer* timer;

    timerModel();
    TimerData getTimerData();
};

#endif // TIMERMODEL_H
