#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QTime>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void start();
    void stop();
    void lap();
    void updateTimer();

private:
    Ui::MainWindow *ui;

    QTime* time;
    QList<QTime> times;
    QTimer timer;

};

#endif // MAINWINDOW_H
