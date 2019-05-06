#include <stdio.h>
#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char **argv)
{
    // if (argc != 2)
    // {
    //     cout << "usage: DisplayImage.out <Image_Path>\n";
    //     return -1;
    // }
    Mat image;
    image = imread("/home/dmitry/CppProjects/PiScanner/TestData/test_crop.jpg");
    if (!image.data)
    {
        cout << "No image data \n";
        return -1;
    }
    namedWindow("Display Image", WINDOW_AUTOSIZE);
    imshow("Display Image", image);
    waitKey(0);
    return 0;
}
