#include "timermodel.h"
#include <QTimer>

timerModel::timerModel()
{
}

    timerModel::TimerData timerModel::getTimerData() {
    struct TimerData timerData;
    seconds--;
    if (seconds == 0) {
        seconds = 60;
        minutes--;
        if (minutes == 0) {
            minutes = 0;
            timerData.isDone = true;
        }
    }

    timerData.secondsString = QString::number(seconds);
    timerData.minutesString = QString::number(minutes);
    return timerData;


}


