#ifndef GRID_HPP
#define GRID_HPP
#include "case.hpp"
#include <vector>

class Grid
{
public:

    /**
     * @constructor Create Grid
     *
     * @param int x
     * @param int y
     * @param std::vector<std::vector<int>> v
     *
     * @return object Grid
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


     /**
     * @brief Display the grid
     *
     * @param int x
     * @param int y
     * @param std::vector<std::vector<int>>& v
     *
     * @return std::vector<std::vector<int>>
     */
    void displayGrid(int x, int y, std::vector<std::vector<int>>& v) const;


     /**
     * @brief Create tab of int who contains symbols
     *
     * @param Grid grille
     *
     * @return std::vector<std::vector<int>>
     */
    std::vector<std::vector<int>> creerSymbole(Grid grille);


     /**
     * @brief Destructor
     *
     */
    ~Grid();

private:
    int length;
    int width;
    std::vector<std::vector<int>> grid;

};
#endif

