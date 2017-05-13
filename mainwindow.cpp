#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "filtromedianas.h"
#include <opencv2/opencv.hpp>
#include <QTimer>
#include <QTextStream>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core.hpp>
#include <algorithm>

using namespace cv;
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::DisplayImage(Mat image){
    FiltroMedianas * filtromedianas = new FiltroMedianas();
    Mat imagenFiltrada = filtromedianas->aplicarFiltroMediana(image, 3, 3);

    QImage imdisplay((uchar*)image.data, image.cols, image.rows, image.step, QImage::Format_Indexed8);
    //QImage imdisplay((uchar*)imagenFiltrada.data, imagenFiltrada.cols, imagenFiltrada.rows, imagenFiltrada.step, QImage::Format_Indexed8);
    ui->display_image->setPixmap(QPixmap::fromImage(imdisplay));

}

