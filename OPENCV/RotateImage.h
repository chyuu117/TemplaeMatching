#pragma once
#include <iostream>
#include<opencv2/opencv.hpp>

using namespace cv;
using namespace std;

void rotate_image(Mat& src, Mat& dst, float angle);
