#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <opencv2/opencv.hpp>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public slots:
    //void DisplayImage(cv::Mat image);

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QImage imdisplay;
    QTimer* Timer;
    void DisplayImage(cv::Mat image);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
