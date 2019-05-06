#include <stdio.h>
#include <iostream>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main(int argc, char **argv) {
  Mat image;
  image = imread("../TestData/test_crop.jpg");
  if (!image.data) {
    cout << "No image data \n";
    return -1;
  }
  namedWindow("Display Image", WINDOW_GUI_NORMAL);
  imshow("Display Image", image);
  waitKey(0);
  return 0;
}
