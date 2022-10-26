#include "Rectangle.hpp"
#include <iostream>

Rectangle::Rectangle(int longueur, int largeur, Point base) {
    this->longueur = longueur;

    this->largeur = largeur;

    this->base = base;
}

Rectangle::~Rectangle() {}

void Rectangle::setPoint(const Point &base)
{
    this->base = base;
}

inline int Rectangle::getPerimetre() const
{
    return this->longueur * 2 + this->largeur * 2;
}

inline int Rectangle::getSurface() const
{
    return this->longueur * this->largeur;
}


bool Rectangle::biggerPerimetre(Rectangle rectangle) const{
    return getPerimetre() > rectangle.getPerimetre();
}

bool Rectangle::biggerSurface(Rectangle rectangle) const {
    return getSurface() > rectangle.getSurface();
}

void Rectangle::afficher()
{

        std::cout << "############Rectangle###############" << std::endl;
        std::cout << "Longueur : " << getLongueur() << std::endl;
        std::cout << "Largeur : " << getLargeur() << std::endl;
        std::cout << "Point de base du Rectangle : " << getPoint().x << " , " << getPoint().y << std::endl;
        std::cout << "Perimetre : " << getPerimetre() << std::endl;
        std::cout << "Surface : " << getSurface() << std::endl;
 
}






