#include "Grid.hpp"
#include "case.hpp"
#include "player.hpp"
#include <vector>
#include <iostream>




Grid::Grid(int x, int y, std::vector<std::vector<int>> v)
{
    this->width = x;
    this->length = y;
    this->grid = v;
    
}

void Grid::displayGrid(int x, int y, std::vector<std::vector<int>>& v) const
{

    int num = 1, val = 0;
    for (int i = 0; i < x * 2 + 1; i++) {
        if (i % 2 == 0) {
            std::cout << "   ";
        }
        else {
            std::cout << "   ";
            num++;
            for (int j = 0; j < y; j++) {
                if (v[val][j] == 1)
                    std::cout << "| X ";
                else if (v[val][j] == -1)
                    std::cout << "| O ";
                else
                    std::cout << "|  ";
            }
            std::cout << "|" << std::endl;
            val++;
        }
    }
    std::cout << std::endl;


}

std::vector<std::vector<int>> Grid::creerSymbole(Grid grille) {
    std::vector<int> test;
    std::vector<std::vector<int>> game;

    for (int i = 0; i < grille.getXSize(); i++) {
        test.push_back(0);

    }
    for (int i = 0; i < grille.getYSize(); i++) {
        game.push_back(test);

    }

    return game;
}











