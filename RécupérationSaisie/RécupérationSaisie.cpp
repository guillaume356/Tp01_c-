#include "RécupérationSaisie.hpp"
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

//////////////////////////////////////////////////////////////III.1.1///////////////////////
void PrenomUser()
{
    string Prenom;
    std::cout << "Quel est ton prénom ? : " << std::endl;
    std::cin >> Prenom;
    std::cout << "Bonjour cher " << Prenom << " !" << std::endl;
}
//////////////////////////////////////////////////////////////III.1.2///////////////////////
void PrenomNomUser()
{
    string Prenom;
    string Nom;
    std::cout << "Quel est ton nom et ton prénom ? : " << std::endl;
    std::cin >> Nom;
    std::cin >> Prenom;
    std::cout << "Bonjour cher " << Nom << " " << Prenom << " !" << std::endl;
}
//////////////////////////////////////////////////////////////III.2.1///////////////////////
void JusteNombre()
{
    srand(time(NULL));

    int NbSecret = rand() % 1001;
    int NbUser = 0;
    std::cout << "Veuillez saisir un nombre entre 0 et 1000 : " << std::endl;
    std::cin >> NbUser;
    if (NbUser == NbSecret) {
        std::cout << "Alors la felicitation tu as trouvé le nombre secret" << std::endl;
    }
    else if (NbUser < NbSecret) {
        std::cout << "Le nombre secret est plus grand" << std::endl;
    }
    else {
        std::cout << "Le nombre secret est plus petit" << std::endl;
    }

}

void JusteNombreEssai()
{
    srand(time(NULL));

    int NbSecret = rand() % 1001;
    int NbUser = 0;
    int NbEssais = 0;
    while (NbUser != NbSecret) {
        std::cout << "Veuillez saisir un nombre entre 0 et 1000 : " << std::endl;
        std::cin >> NbUser;
        if (NbUser == NbSecret) {
            NbEssais++;
            std::cout << "Alors la felicitation tu as trouvé le nombre secret en " << NbEssais << " essais" << std::endl;
        }
        else if (NbUser < NbSecret) {
            NbEssais++;
            std::cout << "Le nombre secret est plus grand" << std::endl;
        }
        else {
            NbEssais++;
            std::cout << "Le nombre secret est plus petit" << std::endl;
        }
    }

}
int main()
{

    PrenomUser();
    PrenomNomUser();
    JusteNombre();
    JusteNombreEssai();



    return 0;
}




