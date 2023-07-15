#include "tomatotimer.h"
#include <QPushButton> // Include the QPushButton header
#include <QGridLayout> // Include the QGridLayout header

TomatoTimer::TomatoTimer(QWidget *parent) : QWidget(parent)
{
    timerLabel = new QLabel("25:00", this);
        QPushButton *startButton = new QPushButton("Start", this); // Create the QPushButton

        // Create the grid layout
        QGridLayout *layout = new QGridLayout(this);
        layout->addWidget(timerLabel, 0, 0, 1, 1);       // Add the timerLabel to the layout at row 0, column 0
        layout->addWidget(startButton, 1, 0, 1, 1);      // Add the startButton to the layout at row 1, column 0

        // Set the layout for the widget
        setLayout(layout);


}


void TomatoTimer::displayTimer()
{


    timerData = timerClass.getTimerData();
    if (timerData.isDone) {
        timer->stop();
    }
    timerLabel->setText(timerData.minutesString + ":" + timerData.secondsString);
}
