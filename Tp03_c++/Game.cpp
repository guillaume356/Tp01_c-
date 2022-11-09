#include <iostream>
#include <vector>
#include "Grid.hpp"
#include "Game.hpp"
#include "Player.hpp"


/**
 * @brief Verify if the case selected is out of bonds
 *
 * @return bool
 */
bool isOutOfBonds(int x, int y) {

    if ((x > 3 || x <= 0) || (y > 3 || y <= 0)) {
        return false;
    }
    else {
        return true;
    }

}


/**
 * @brief Verify if the case selected is empty
 *
 * @return bool
 */
bool isEmpty(std::vector<std::vector<int>>& v, int x, int y) {

    if (v[y - 1][x - 1] == 1 || v[y - 1][x - 1] == -1) {
        return false;
    }
    else {
        return true;
    }

}

/**
 * @brief Place a symbol on the case who's selected
 *
 */
void placeCase(std::vector<std::vector<int>>& v, Player player) {
    static int turn = 0;
    int x, y;
    if (player.getIdPlayer() % 2 == 0) {
        do {
            std::cout << "User 1 (X) its your turn, Enter position: ";
            std::cin >> x >> y;
        } while (!isOutOfBonds(x, y));
        while (!isEmpty(v, x, y)) {
            std::cout << "Wrong input User 1 (X), Try Again : ";
            std::cin >> x >> y;
        }
        v[y - 1][x - 1] = 1;
    }
    else {
        do {
            std::cout << "User 2 (O) its your turn, Enter position: ";
            std::cin >> x >> y;
        } while (!isOutOfBonds(x, y));
        while (!isEmpty(v, x, y)) {
            std::cout << "Wrong input User 2 (O), Try Again : ";
            std::cin >> x >> y;
        }
        v[y - 1][x - 1] = -1;
    }
    turn++;

}


/**
 * @brief Verify if the grid is full
 *
 * @return bool
 */
bool checkDraw(std::vector<std::vector<int>>& v) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (v[i][j] == 0)
                return 1;
        }
    }
    return 0;
}


/**
 * @brief Verify if one of the player has win
 *
 * @return bool
 */
bool victoire(std::vector<std::vector<int>>& v) {
    int num1 = 0, num2 = 0;
    int J_Gagnant1 = 0, J_Gagnant2 = 0, J_Gagnant3 = 0;
    bool x, y, z = false;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (v[i][j] == v[i][0] && v[i][0] != 0) {
                x = true;
                J_Gagnant1 = v[i][0];
                num1++;
                if (num1 == 3)
                    break;
            }
            else {
                x = false;
                break;
            }
        }
        num1 = 0;
        if (x)
            break;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (v[j][i] == v[0][i] && v[0][i] != 0) {
                y = true;
                J_Gagnant2 = v[0][i];
                num2++;
                if (num2 == 3)
                    break;
            }
            else {
                y = false;
                break;
            }
        }
        num2 = 0;
        if (y)
            break;
    }

    if (v[0][0] == v[1][1] && v[1][1] == v[2][2] && v[1][1] != 0) {
        if (v[0][0] == 1) {
            z = true;
            J_Gagnant3 = 1;
        }
        else if (v[0][0] == -1) {
            z = true;
            J_Gagnant3 = -1;
        }
    }
    else if (v[0][2] == v[1][1] && v[1][1] == v[2][0] && v[1][1] != 0) {
        if (v[0][2] == 1) {
            z = true;
            J_Gagnant3 = 1;
        }
        else if (v[0][2] == -1) {
            z = true;
            J_Gagnant3 = -1;
        }
    }

    if (x || y || z) {
        if (J_Gagnant1 == 1 || J_Gagnant2 == 1 || J_Gagnant3 == 1) {
            std::cout << "USER 1 (X) IS THE WINNER :D\n";
            return true;
        }
        else if (J_Gagnant1 == -1 || J_Gagnant2 == -1 || J_Gagnant3 == -1) {
            std::cout << "USER 2 (O) THE IS WINNER :D\n";
            return true;
        }
    }
    else if (!checkDraw(v)) {
        std::cout << "DRAW...\n";
        std::cout << "DO you want to restart the game ?";
        return true;
    }
}





void main() {
        int jeu = 0;
        std::cout << "1. Morpion" << std::endl;
        std::cout << "2. Puissance 4" << std::endl
            << std::endl;

        std::cout << "Entrez n'importe quel autre chiffre pour quitter." << std::endl;

        std::cout << "Faites votre choix :" << std::endl;
        std::cin >> jeu;

        if (jeu > 2)
        {
            exit;
        }

        if (jeu == 1)
        {
            bool GameOver = false;
            Player player1(1);
            Player player2(2);
            std::vector<std::vector<int>> game;
            Grid grid(3, 3, game);
            game = grid.creerSymbole(grid);

            while (!GameOver) {
                grid.displayGrid(grid.getXSize(), grid.getYSize(), game);
                placeCase(game, player2);
                victoire(game);
                grid.displayGrid(grid.getXSize(), grid.getYSize(), game);
                placeCase(game, player1);
                victoire(game);
                
            }

        }
        else if (jeu == 2)
        {  
        }
}
