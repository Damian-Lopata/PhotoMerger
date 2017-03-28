#include "mergerwindow.h"
#include <QApplication>
#include "cv.h"
#include "cxcore.h"
#include "highgui.h"
#include <opencv2/core/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <iostream>
#include <string>

using namespace cv;
using namespace std;

int main(int argc, char *argv[])
{
    string imageName("/Users/damian/PhotoMerger/Merger/DSC_1930.jpg");
    Mat image = imread(imageName.c_str(), IMREAD_COLOR);
    namedWindow("Display window", WINDOW_AUTOSIZE );
    imshow("Display window", image );
    cvWaitKey();
}
