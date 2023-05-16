#include "pch.h"
#include "TailleFenetre.h"


TailleFenetre::TailleFenetre(int _red, int _gree, int _blu, int _longeur, int _largeur)
{
	red = _red;
	green = _gree;
	blue = _blu;
	longueur = _longeur;
	largeur = _largeur;
}

cv::Mat TailleFenetre::Display()
{
	cv::Mat image(largeur, longueur, CV_8UC3, cv::Scalar(red, green, blue));
	return image;
}
