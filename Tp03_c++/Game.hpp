#pragma once
#ifndef GAME_HPP
#define GAME_HPP
#include "grid.hpp"
#include "Player.hpp"
#include <vector>

class Game
{
public:

    Game(Player player1,Player player2);

    bool isOutOfBonds(int x, int y);

    bool isEmpty(std::vector<std::vector<int>>& v, int x, int y);

    void placeCase(std::vector<std::vector<int>>& v, Player player);

    bool checkDraw(std::vector<std::vector<int>>& v);

    bool victoire(std::vector<std::vector<int>>& v);

    void TicTacToe();

private:

    Player player1();
    Player player2();
};
#endif

