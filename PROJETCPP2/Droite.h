#pragma once
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
class Droite
{
private :
    int xpt1;
    int ypt1;
    int xpt2;
    int ypt2;
    int red;
    int green;
    int blue;
public:
    Droite(int _xpt1, int _ypt1, int _xpt2, int _ypt2, int _red, int _green, int _blue);
    void Display(cv::Mat _image);
};

