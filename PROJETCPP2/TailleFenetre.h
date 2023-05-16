#pragma once
#include <opencv2/opencv.hpp>

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
class TailleFenetre
{
private:
	int largeur;
	int longueur;
	int red;
	int green;
	int blue;
public:
	TailleFenetre(int _red,  int _gree, int _blu, int _longeur, int _largeur);
	cv::Mat Display();
};

