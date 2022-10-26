#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Point.hpp"

class Rectangle
{
public:

	/**
	 * @brief constructor 
	 *
	 * @return Rectangle
	 */
	Rectangle(int longueur, int largeur, Point base);

	/**
	 * @brief destructor
	 *
	 */
	~Rectangle();

	/**
	 * @brief Get the length of the object
	 *
	 * @return int
	 */
	inline int getLongueur() const { return longueur; }

	/**
	 * @brief Get the width of the object
	 *
	 * @return int
	 */
	inline int getLargeur() const { return largeur; }

	/**
	 * @brief Get the origin point of the object
	 *
	 * @return Point
	 */
	inline Point getPoint() const { return base; }

	/**
	 * @brief Set the length of the object
	 *
	 * @param longueur
	 */
	inline void setLongueur(int longueur) { this->longueur = longueur; }

	/**
	 * @brief Set the width of the object
	 *
	 * @param largeur
	 */
	inline void setLargeur(int largeur) { this->largeur = largeur; }

	/**
	 * @brief Get the origin point of the object
	 *
	 * @param base
	 */
	void setPoint(const Point &base);

	 /**
     * @brief Get the perimeter of the object
     *
     * @return int
     */
	inline int getPerimetre() const;

	/**
     * @brief Get the surface of the object
     *
     * @return int
     */
	inline int getSurface() const;

	/**
	* @brief Return informations about methods of the class
	*
	* @return void
	*/
	void afficher();


	/**
	* @brief Verify if the current object has a biggest perimeter than the rectangle in parameter
	*
	* @return bool
	*/
	bool biggerPerimetre(Rectangle rectangle) const;

	/**
	* @brief Verify if the current object has a biggest surface than the rectangle in parameter
	*
	* @return bool
	*/
	bool biggerSurface(Rectangle rectangle) const;



private:
	int longueur;
	int largeur;
	Point base;

};
#endif RECTANGLE_H

