#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;
///////////////////////////////////////////////////////////////1.1.1///////////////////////
int Somme(int a, int b)
{
    return a + b;
}
///////////////////////////////////////////////////////////////1.1.2///////////////////////
void Inverse(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
//////////////////////////////////////////////////////////////1.1.3///////////////////////
int SommePointeur(int* a, int* b, int* c)
{
    *c = Somme(*a, *b);
    return *c;
}

int SommeReference(int& a, int& b, int c)
{
    c = Somme(a, b);
    return c;
}
//////////////////////////////////////////////////////////////1.1.4///////////////////////
void CreerTab(int size, std::vector<int> tab)
{

    tab.resize(size);


    srand(time(0));
    cout << "Voici votre tableau" << endl;

    for (std::size_t i = 0; i < size; i++)
    {
        tab[i] = rand();
        cout << tab[i] << std::endl;
    }

    for (std::size_t i = 1; i < size; i++) {
        int j = i;

        while (j > 0 && tab[j - 1] > tab[j]) {

            Inverse(tab[j - 1], tab[j]);

            j--;
        }
    }

    cout << "Voici votre tableau tri�" << endl;
    for (std::size_t i = 0; i < size; i++)
    {
        cout << tab[i] << std::endl;
    }
}
//////////////////////////////////////////////////////////////III.1.1///////////////////////
void PrenomUser()
{
    string Prenom;
    std::cout << "Quel est ton pr�nom ? : " << std::endl;
    std::cin >> Prenom;
    std::cout << "Bonjour cher " << Prenom << " !" << std::endl;
}
//////////////////////////////////////////////////////////////III.1.2///////////////////////
void PrenomNomUser()
{
    string Prenom;
    string Nom;
    std::cout << "Quel est ton nom et ton pr�nom ? : " << std::endl;
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
        std::cout << "Alors la felicitation tu as trouv� le nombre secret" << std::endl;
    }
    else if (NbUser < NbSecret) {
        std::cout << "Le nombre secret est plus grand" << std::endl;
    }
    else {
        std::cout << "Le nombre secret est plus petit" << std::endl;
    }

}
void Tennis()
{
    int nbEchangesJoueurA = 0;
    int nbEchangesJoueurB = 0;
    std::cout << "Entrez le nb d'�changes gagn�s pour le joueur A : " << std::endl;
    std::cin >> nbEchangesJoueurA;
    std::cout << "Entrez le nb d'�changes gagn�s pour le joueur B : " << std::endl;
    std::cin >> nbEchangesJoueurB;
    switch (nbEchangesJoueurA) {
    case 0:
        nbEchangesJoueurA = 0;
        std::cout << "Score du joueur a : " << nbEchangesJoueurA << std::endl;
        break;
    case 1:
        nbEchangesJoueurA = 15;
        std::cout << "Score du joueur a : " << nbEchangesJoueurA << std::endl;
        break;
    case 2:
        nbEchangesJoueurA = 30;
        std::cout << "Score du joueur a : " << nbEchangesJoueurA << std::endl;
        break;
    default:
        nbEchangesJoueurA = 40;
        std::cout << "Score du joueur b : " << nbEchangesJoueurA << std::endl;
        break;
    }
    switch (nbEchangesJoueurB) {
    case 0:
        nbEchangesJoueurB = 0;
        std::cout << "Score du joueur b : " << nbEchangesJoueurB << std::endl;
        break;
    case 1:
        nbEchangesJoueurB = 15;
        std::cout << "Score du joueur b : " << nbEchangesJoueurB << std::endl;
        break;
    case 2:
        nbEchangesJoueurB = 30;
        std::cout << "Score du joueur b : " << nbEchangesJoueurB << std::endl;
        break;
    default:
        nbEchangesJoueurB = 40;
        std::cout << "Score du joueur b : " << nbEchangesJoueurB << std::endl;
        break;

    }
    if (nbEchangesJoueurA == 40) {
        std::cout << "Egalit� !" << std::endl;
    }





}//////////////////////////////////////////////////////////////III.2.2///////////////////////
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
            std::cout << "Alors la felicitation tu as trouv� le nombre secret en " << NbEssais << " essais" << std::endl;
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
    int a;
    int b;
    int c;
    int size;
    std::vector<int> tab;

    cout << "Entrez un nombre" << endl;
    cin >> a; //On fait entrer un nombre dans cette case
    cout << "Entrez un second nombre" << endl;
    cin >> b; //On fait entrer un nombre dans cette case


    cout << "Votre nombre vaut " << Somme(a, b) << endl; //Et on l'affiche

    Inverse(a, b);
    cout << "Le nombre a vaut d�sormais " << a << endl;
    cout << "Le nombre b vaut d�sormais " << b << endl;

    cout << "Entrez un dernier nombre nombre" << endl;
    cin >> c; //On fait entrer un nombre dans cette case

    cout << "Votre nombre c vaut avec les pointeurs " << SommePointeur(&a, &b, &c) << endl;
    cout << "Votre nombre c vaut avec les r�f�rences " << SommeReference(a, b, c) << endl;

    cout << "Veuillez entrer une taille de tableau : " << endl;
    cin >> size; //On fait entrer un nombre dans cette case
    CreerTab(size, tab);
    Tennis();
    PrenomUser();
    PrenomNomUser();
    JusteNombre();
    JusteNombreEssai();



    return 0;
}




