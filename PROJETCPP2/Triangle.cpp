//
// Created by Faniry Andriamasinoro on 17/05/2023.
//

#include "Triangle.h"

Triangle::Triangle(int _xpt1, int _ypt1, int _xpt2, int _ypt2, int _xpt3, int _ypt3, int _red, int _green, int _blue) {
    xpt1 = _xpt1;
    xpt2 = _xpt2;
    ypt1 = _ypt1;
    ypt2 = _ypt2;
    xpt3 = _xpt3;
    ypt3 = _ypt3;
    red = _red;
    green = _green;
    blue = _blue;
}

void Triangle::Display(cv::Mat _image) {
    cv::Point pt1(xpt1, ypt1);
    cv::Point pt2(xpt2, ypt2);
    cv::Point pt3(xpt3, ypt3);
    cv::triangle(_image, pt1, pt2, pt3, cv::Scalar(blue,green, red));
    cv::imshow("output", _image);
}
