// ProjetCPP.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <opencv2/opencv.hpp>

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include"TailleFenetre.h"
#include"Rectangle.h"

int main()
{
	// Concocting of the rectangle with the classes
	TailleFenetre Fenetre1(0, 255, 0, 700, 500);
	Rectangle Rectangle1(255, 255, 500, 500, 255, 0, 0);
	Rectangle1.Display(Fenetre1.Display());
	cv::waitKey(0);

	// Concocting of the circle (giga swag chad sigma)

	cv::Mat whiteMatrix(200, 200, CV_8UC3, cv::Scalar(255, 255, 255));//Declaring a white matrix
	cv::Point center(100, 100);//Declaring the center point
	int radius = 50; //Declaring the radius
	cv::Scalar line_Color(0, 0, 0);//Color of the circle
	int thickness = 2;//thickens of the line
	cv::namedWindow("whiteMatrix");//Declaring a window to show the circle
	circle(whiteMatrix, center, radius, line_Color, thickness);//Using circle()function to draw the line//
	imshow("WhiteMatrix", whiteMatrix);//Showing the circle//
	cv::waitKey(0);//Waiting for Keystroke//


	return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Conseils pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
