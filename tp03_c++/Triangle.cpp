#include "Triangle.hpp"
#include <array>
#include <iostream>


Triangle::Triangle(Point point1, Point point2, Point point3) {
    this->point1 = point1;
    this->point2 = point2;
    this->point3 = point3;
}

Triangle::~Triangle() {} /*Creation du destructeur triangle*/

inline float Triangle::getBase() const
{
    std::array<float, 3> longueur = getLongueur();
    float base = 0.0;
    for (int i = 0; i < longueur.size(); i++) {
        if (longueur[i] > base) {
            base = longueur[i];
        }
    }
    return base;

}

inline std::array<float, 3> Triangle::getLongueur() const
{
    float distance1 = sqrt(((point1.x - point2.x) * (point1.x - point2.x)) + ((point1.y - point2.y) * (point1.y - point2.y)));
    float distance2 = sqrt(((point2.x - point3.x) * (point2.x - point3.x)) + ((point2.y - point3.y) * (point2.y - point3.y)));
    float distance3 = sqrt(((point1.x - point3.x) * (point1.x - point3.x)) + ((point1.y - point3.y) * (point1.y - point3.y)));
    return { distance1, distance2, distance3 };
}

inline float Triangle::getHauteur() const
{
    float base = getBase();
    float aire = getSurface();
    return (aire * 2 / base);
}

inline float Triangle::getSurface() const /* Calcul de l'aire sans utilisation de la hauteur (Formule de Héron) */
{
    std::array<float, 3> longueur = getLongueur();
    float demiPerimetre = (longueur[0] + longueur[1] + longueur[2]) / 2.0;
    return std::sqrt(demiPerimetre * (demiPerimetre - longueur[0]) * (demiPerimetre - longueur[1]) * (demiPerimetre - longueur[2]));

}

bool Triangle::isIsosceles() const
{
    std::array<float, 3> longueur = getLongueur();
    return(longueur[0] == longueur[1] || longueur[1] == longueur[2] || longueur[0] == longueur[2]);
}

bool Triangle::isEquilateral() const
{
    std::array<float, 3> longueur = getLongueur();
    return(longueur[0] == longueur[1] && longueur[1] == longueur[2] && longueur[0] == longueur[2]);
}

bool Triangle::isRectangle() const
{
    std::array<float, 3> longueur = getLongueur();
    float base = getBase();
    
    return(std::pow(base, 2) == std::pow(longueur[0], 2) + std::pow(longueur[1], 2) 
        || std::pow(base, 2) == std::pow(longueur[1], 2) + std::pow(longueur[2], 2)
        || std::pow(base, 2) == std::pow(longueur[0], 2) + std::pow(longueur[2], 2));

}

void Triangle::afficher() {
    std::array<float, 3> longueur = getLongueur();
    std::cout << "############Triangle###############" << std::endl;
    std::cout << "Point 1 : " << getPoint1().x << " , " << getPoint1().y << std::endl;
    std::cout << "Point 2 : " << getPoint2().x << " , " << getPoint2().y << std::endl;
    std::cout << "Point 3 : " << getPoint3().x << " , " << getPoint3().y << std::endl;
    std::cout << "Longueur 1 : " << longueur[0] << std::endl;
    std::cout << "Longueur 2 : " << longueur[1] << std::endl;
    std::cout << "Longueur 3 : " << longueur[2] << std::endl;
    std::cout << "Base : " << getBase() << std::endl;
    std::cout << "Hauteur : " << getHauteur() << std::endl;
    std::cout << "Surface : " << getSurface() << std::endl;
    std::cout << "Est-t-il Equilateral ? " << isEquilateral() << std::endl;
    std::cout << "Est-t-il Isocele ? " << isIsosceles() << std::endl;
    std::cout << "Est-t-il Rectangle ? " << isRectangle() << std::endl;
}