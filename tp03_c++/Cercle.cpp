#include "Cercle.hpp"
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>

Cercle::Cercle(Point centre, int diametre) {
    this->centre = centre;
    this->diametre = diametre;
}

Cercle::~Cercle(){}

void Cercle::setCentre(const Point centre)
{
    this->centre = centre;
}

float Cercle::getPerimetre() const
{
    return 2 * M_PI * (diametre / 2);
}

float Cercle::getSurface() const
{
    return M_PI * (diametre / 2) * (diametre / 2);
}

bool Cercle::IsOnCircle(Point point) 
{
    float distanceCercle = sqrt(((point.x - centre.x)*(point.x - centre.x))+((point.y - centre.y) * (point.y - centre.y)));
    if (this->diametre/2 == distanceCercle)
    {
        return true;
    }
    else {
        return false;
    }
}

bool Cercle::IsInCircle(Point point)
{
    float distanceCercle = sqrt(((point.x - centre.x) * (point.x - centre.x)) + ((point.y - centre.y) * (point.y - centre.y)));
    if (this->diametre/2 > distanceCercle)
    {
        return true;
    }
    else {
        return false;
    } 
}

void Cercle::afficher()
{

    std::cout << "###############Cercle##########" << std::endl;
    std::cout << "Centre : " << getCentre().x << " , " << getCentre().y << std::endl;
    std::cout << "Diametre : " << getDiametre() << std::endl;
    std::cout << "Perimetre : " << getPerimetre() << std::endl;
    std::cout << "Surface : " << getSurface() << std::endl;


}

