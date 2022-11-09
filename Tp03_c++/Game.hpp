#pragma once
#ifndef GAME_HPP
#define GAME_HPP
#include "grid.hpp"
#include "Player.hpp"
#include <vector>

class Game
{
public:

    
     /**
     * @brief Verify if the case selected is out of bonds
     *
     * @return bool
     */
    bool isOutOfBonds(int x, int y);
     /**
     * @brief Verify if the case selected is empty
     *
     * @return bool
     */
    bool isEmpty(std::vector<std::vector<int>>& v, int x, int y);
     /**
     * @brief Place a symbol on the case who's selected
     *
     */
    void placeCase(std::vector<std::vector<int>>& v, Player player);
     /**
     * @brief Verify if the grid is full
     *
     * @return bool
     */
    bool checkDraw(std::vector<std::vector<int>>& v);
     /**
     * @brief Verify if one of the player has win
     *
     * @return bool
     */
    bool victoire(std::vector<std::vector<int>>& v);


private:
    std::vector<std::vector<int>>& v;
    Player player1(int x);
    Player player2(int y);
};
#endif

