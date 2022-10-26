#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP
#include "Point.hpp"
#include <array>
class Triangle {
public:


	/**
	 * @brief constructor
	 *
	 * @return Triangle
	 */
	Triangle(Point point1, Point point2, Point point3);

	/**
	 * @brief destructor
	 *
	 */
	~Triangle();

	/**
	 * @brief Get the point1 of the triangle
	 *
	 * @return Point
	 */
	inline Point getPoint1() const { return point1; }

	/**
	 * @brief Get the point2 of the triangle
	 *
	 * @return Point
	 */
	inline Point getPoint2() const { return point2; }

	/**
	 * @brief Get the point3 of the triangle
	 *
	 * @return Point
	 */
	inline Point getPoint3() const { return point3; }

	/**
	 * @brief Set the point1 of the triangle
	 *
	 * @param point1
	 */
	inline void setPoint1(const Point point1) { this->point1 = point1; }

	/**
	 * @brief Set the point2 of the triangle
	 *
	 * @param point2
	 */
	inline void setPoint2(const Point point2) { this->point2 = point2; }

	/**
	 * @brief Set the point3 of the triangle
	 *
	 * @param point3
	 */
	inline void setPoint3(const Point point3) { this->point3 = point3; }


	 /**
     * @brief Get the triangle base 
     *
     * @return float
     */
    inline float getBase() const;

	 /**
     * @brief Get the 3 length of the triangle
     *
     * @return std::array<float, 3>
     */
    inline std::array<float, 3> getLongueur() const;

	/**
	* @brief Get the heigth of the Triangle
	*
	* @return float
	*/
	inline float getHauteur() const;

	/**
	* @brief Get the surface of the Triangle
	*
	* @return float
	*/
	inline float getSurface() const;

	/**
	* @brief Verify if the Triangle is isosceles
	*
	* @return bool
	*/
	bool isIsosceles() const;

	/**
	* @brief Verify if the Triangle is rectangle
	*
	* @return bool
	*/
	bool isRectangle() const;


	/**
	* @brief Verify if the Triangle is equilateral
	*
	* @return bool
	*/
	bool isEquilateral() const;

	/**
	* @brief Return informations about methods of the class
	*
	* @return void
	*/
	void afficher();



private:
	Point point1;
	Point point2;
	Point point3;
};
#endif

