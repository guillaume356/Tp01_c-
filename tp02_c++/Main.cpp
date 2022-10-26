#include <iostream>
#include "Cercle.hpp"
#include "Rectangle.hpp"
#include "Cercle.hpp"
#include "Triangle.hpp"

int main()
{
	Point p{ 0,0 }; /*Création d'un point p*/
	Rectangle *rectangle1 = new Rectangle(2,3,p);
	rectangle1->afficher();

	
	/*Bonus*/
	Rectangle *rectangle2 = new Rectangle(7,6,p); /*Essai avec un rectangle au plus grand perimetre*/
	std::cout << "Plus grand périmètre ?" << rectangle1->biggerPerimetre(*rectangle2) << std::endl;
	delete rectangle2;

	Rectangle* rectangle3 = new Rectangle(1, 2, p); /*Essai avec un rectangle au plus petit perimetre*/
	std::cout << "Plus grand périmètre ?" << rectangle1->biggerPerimetre(*rectangle3) << std::endl;
	delete rectangle3;

	Rectangle* rectangle4 = new Rectangle(7, 6, p); /*Essai avec un rectangle avec une plus grande surface*/
	std::cout << "Plus grande surface ?" << rectangle1->biggerPerimetre(*rectangle4) << std::endl;
	delete rectangle4;

	Rectangle* rectangle5 = new Rectangle(1, 2, p); /*Essai avec un rectangle avec une plus petite surface*/
	std::cout << "Plus grand surface ?" << rectangle1->biggerPerimetre(*rectangle5) << std::endl;
	delete rectangle5;
	/*Bonus*/


	delete rectangle1; /*Destruction de chaque objet pour libérer l'espace mémoire*/



	Point c{ 0,0 };
	Cercle* cercle1 = new Cercle(c,30);
	cercle1->afficher();
	Point test{ 30,30 }; /* Test d'un point en dehors du cercle*/
	std::cout << "Dans le cercle ? " << cercle1->IsInCircle(test) << std::endl;
	Point test1{ 14,0 }; /* Test d'un point dans le cercle*/
	std::cout << "Dans le cercle ? " << cercle1->IsInCircle(test1) << std::endl;

	Point test2{ 201,20 }; /*Test d'un point qui n'est pas dans le cercle*/
	std::cout << "Sur le cercle ? " << cercle1->IsOnCircle(test2) << std::endl;

	Point test3{ 0,15 }; /*Test d'un point qui est sur le cercle*/
	std::cout << "Sur le cercle ? " << cercle1->IsOnCircle(test3) << std::endl;
	delete cercle1;



	/*Test avec un triangle isocèle */
	Point point1{ 0,0 };
	Point point2{ 2,0 };
	Point point3{ 1,2 };
	Triangle *triangle1 = new Triangle(point1, point2, point3);
	triangle1->afficher();
	delete triangle1;


	/*Test avec un triangle equilateral */
	Point point4{ 0,0 };
	Point point5{ 2,0 };
	Point point6{ 1, sqrt(3)};
	Triangle* triangle2 = new Triangle(point4, point5, point6);
	triangle2->afficher();
	delete triangle2;

	/*Test avec un triangle rectangle */
	Point point7{ 0,0 };
	Point point8{ 0,3 };
	Point point9{ 4,0 };
	Triangle* triangle3 = new Triangle(point7, point8, point9);
	triangle3->afficher();
	delete triangle3;
}
