#include <cstdlib>
#include <iostream>


void Tennis()
{
    int nbEchangesJoueurA = 0;
    int nbEchangesJoueurB = 0;
    int nbPointA = 0;
    int nbPointB = 0;
    std::cout << "Entrez le nb d'échanges gagnés pour le joueur A : " << std::endl;
    std::cin >> nbEchangesJoueurA;
    std::cout << "Entrez le nb d'échanges gagnés pour le joueur B : " << std::endl;
    std::cin >> nbEchangesJoueurB;
    switch (nbEchangesJoueurA) {
    case 0:
        nbPointA = 0;
        std::cout << "Score du joueur a : " << nbPointA << std::endl;
        break;
    case 1:
        nbPointA = 15;
        std::cout << "Score du joueur a : " << nbPointA << std::endl;
        break;
    case 2:
        nbPointA = 30;
        std::cout << "Score du joueur a : " << nbPointA << std::endl;
        break;
    case 3:
        nbPointA = 40;
        std::cout << "Score du joueur a : " << nbPointA << std::endl;
        break;
    default:
        nbPointA = 40;
        std::cout << "Score du joueur A : " << nbPointA << std::endl;
        if (nbEchangesJoueurA >= nbEchangesJoueurB + 2)
        {


            std::cout << "Victoire pour le joueur a" << std::endl;

        }
        break;
    }
    switch (nbEchangesJoueurB) {
    case 0:
        nbPointB = 0;
        std::cout << "Score du joueur b : " << nbPointB << std::endl;
        break;
    case 1:
        nbPointB = 15;
        std::cout << "Score du joueur b : " << nbPointB << std::endl;
        break;
    case 2:
        nbPointB = 30;
        std::cout << "Score du joueur b : " << nbPointB << std::endl;
        break;
    case 3:
        nbPointB = 40;
        std::cout << "Score du joueur b : " << nbPointB << std::endl;
        break;
    default:
        nbPointB = 40;
        std::cout << "Score du joueur b : " << nbPointB << std::endl;
        if (nbEchangesJoueurB >= nbEchangesJoueurA + 2)
        {
            std::cout << "Victoire pour le joueur b" << std::endl;

        }
        break;
    }
    if (nbPointA == 40 && nbPointB == 40 && (nbEchangesJoueurA == nbEchangesJoueurB)) {
        std::cout << "Egalité !" << std::endl;
    }
    if (nbEchangesJoueurA >= 3 && nbEchangesJoueurB >= 3) {
        if (nbEchangesJoueurA == nbEchangesJoueurB + 1) {
            std::cout << "Avantage pour le joueur A" << std::endl;
        }
        else if (nbEchangesJoueurB == nbEchangesJoueurA + 1) {
            std::cout << "Avantage pour le joueur B" << std::endl;
        }
    }

}

int main()
{

    Tennis();



    return 0;
}





