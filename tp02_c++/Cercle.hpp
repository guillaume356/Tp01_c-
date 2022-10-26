#ifndef CERCLE_HPP
#define CERCLE_HPP

#include "Point.hpp"

class Cercle {

public:

	/**
	 * @brief constructor
	 *
	 * @return Cercle
	 */
	Cercle(Point centre, int diametre);


	/**
	 * @brief destructor
	 *
	 */
	~Cercle();

	/**
	 * @brief Get the diameter of the circle
	 *
	 * @return int
	 */
	inline int getDiametre() const { return diametre; }

	/**
	 * @brief Get the center point of the circle
	 *
	 * @return Point
	 */
	inline Point getCentre() const { return centre; }

	/**
	 * @brief Set the diameter of the circle
	 *
	 * @param diametre
	 */
	inline void setDiametre(int diametre) { this->diametre = diametre; }

	/**
	 * @brief Set the center point of the circle
	 *
	 * @param base
	 */
	void setCentre(const Point centre);

	/**
     * @brief Get the perimeter of the Circle
     *
     * @return float
     */
	inline float getPerimetre() const;

	/**
     * @brief Get the surface of the Circle
     *
     * @return float
     */
	inline float getSurface() const;

	/**
     * @brief Verify if a point is on the circle
     *
     * @return bool
     */
	bool IsOnCircle(Point point);

	/**
	 * @brief Verify if a point is in the circle
	 *
	 * @return bool
	 */
	bool IsInCircle(Point point);

	/**
	* @brief Return informations about methods of the class
	*
	* @return void
	*/
	void afficher();

private:
	Point centre;
	int diametre;

};
#endif