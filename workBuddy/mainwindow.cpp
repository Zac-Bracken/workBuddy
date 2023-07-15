#include "MainWindow.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    widget2 = new TomatoTimer(this);

    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(widget2);

    QWidget *centralWidget = new QWidget(this);
    centralWidget->setLayout(layout);
    setCentralWidget(centralWidget);
}
