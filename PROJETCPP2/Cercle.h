#pragma once
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
class Cercle
{
private:
	int xptcenter;
	int yptcenter;
	int radius;
	int red;
	int green;
	int blue;
	int thickness;
public:
	Cercle(int _xptcenter, int _yptcenter, int radius, int red, int green, int blue, int thickness);
	void Display(cv::Mat image);
};

