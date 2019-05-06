#include <stdio.h>
#include <iostream>
#include <exception>
#include <string>
#include "opencv2/opencv.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"

using namespace cv;
using namespace std;

int main(int argc, char **argv) {
  Mat image;
  image = imread("../TestData/test_crop.jpg");
  if (!image.data) {
    throw logic_error("No image data!\n");
  }
  namedWindow("Display Image", WindowFlags::WINDOW_FREERATIO);
  resizeWindow("Display Image", {1920, 1080});
  imshow("Display Image", image);
  waitKey(0);
  return 0;
}
