#include "mainwindow.h"
#include <QDialog>
#include <QApplication>
#include <QMainWindow>
#include "opencv2/opencv.hpp"


using namespace cv;
int main(int argc, char *argv[])
{
    Mat img = imread("/home/diego/Escritorio/metodos/proyecto/Opencv/salPimienta.png", CV_LOAD_IMAGE_GRAYSCALE);
    QApplication a(argc, argv);
    MainWindow w;
    w.DisplayImage(img);
    w.show();
    return a.exec();
}
