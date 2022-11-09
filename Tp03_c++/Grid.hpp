#ifndef GRID_HPP
#define GRID_HPP
#include "case.hpp"
#include <vector>

class Grid
{
public:

    /**
    * @brief New Grid Object
    *
    * @param size
    */
    Grid(int x, int y, std::vector<std::vector<int>> v);

    /**
   * @brief Get grid X size
   *
   * @return unsigned int
   */
    inline unsigned int getXSize() const { return this->length; };

    /**
     * @brief Get grid Y size
     *
     * @return unsigned int
     */
    inline unsigned int getYSize() const { return this->width; };



    void displayGrid(int x, int y, std::vector<std::vector<int>>& v) const;

    std::vector<std::vector<int>> creerSymbole(Grid grille);




private:
    int length;
    int width;
    std::vector<std::vector<int>> grid;

};
#endif

