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



    //for (int i = 0;i < size-1;i++) {
    //    if (tab[i] > tab[i + 1])
    //        Inverse(tab[i], tab[i + 1]);
    //}

    for (std::size_t i = 1; i < size; i++) {
        int j = i;

        while (j > 0 && tab[j - 1] > tab[j]) {
            //tmp = tab[j];
            //tab[j] = tab[j - 1];
            //tab[j - 1] = tmp;
            Inverse(tab[j - 1], tab[j]);

            j--;
        }
    }

    cout << "Voici votre tableau trié" << endl;
    for (std::size_t i = 0; i < size; i++)
    {
        cout << tab[i] << std::endl;
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
    cout << "Le nombre a vaut désormais " << a << endl;
    cout << "Le nombre b vaut désormais " << b << endl;

    cout << "Entrez un dernier nombre nombre" << endl;
    cin >> c; //On fait entrer un nombre dans cette case

    cout << "Votre nombre c vaut avec les pointeurs " << SommePointeur(&a, &b, &c) << endl;
    cout << "Votre nombre c vaut avec les références " << SommeReference(a, b, c) << endl;

    cout << "Veuillez entrer une taille de tableau : " << endl;
    cin >> size; //On fait entrer un nombre dans cette case
    CreerTab(size, tab);



    return 0;
}




