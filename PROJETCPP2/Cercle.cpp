#include "pch.h"
#include "Cercle.h"

Cercle::Cercle(int _xptcenter, int _yptcenter, int _radius, int _red, int _green, int _blue, int _thickness)
{
	xptcenter = _xptcenter;
	yptcenter = _yptcenter;
	radius = _radius;
	red = _red;
	green = _green;
	blue = _blue;
	thickness = _thickness;
}

void Cercle::Display(cv::Mat image)
{
	cv::Point center(xptcenter, yptcenter);
	cv::Scalar line_Color(red, green, blue);
	cv::circle(image, center, radius, line_Color, thickness);
	imshow("Cercle", image);
	cv::waitKey(0);
}
