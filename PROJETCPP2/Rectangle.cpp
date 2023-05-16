#include "pch.h"
#include "Rectangle.h"


Rectangle::Rectangle(int _xpt1, int _ypt1, int _xpt2, int _ypt2, int _red, int _green, int _blue)
{
	xpt1 = _xpt1;
	xpt2 = _xpt2;
	ypt1 = _ypt1;
	ypt2 = _ypt2;
	red = _red;
	green = _green;
	blue = _blue;
}

void Rectangle::Display(cv::Mat _image)
{
	cv::Point pt1(xpt1, ypt1);
	cv::Point pt2(xpt2, ypt2);
	cv::rectangle(_image, pt1, pt2, cv::Scalar(red, green, blue));
}
