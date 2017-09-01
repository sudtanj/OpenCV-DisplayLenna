#include <opencv2\opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;

void main() {
	Mat img = imread("lena.jpg");
	namedWindow("Image", WINDOW_NORMAL);
	imshow("image", img);
	waitKey(0);
}