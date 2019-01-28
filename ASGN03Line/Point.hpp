/*
 * Point.hpp
 *
 *  Created on: 27 Jan 2019
 *      Author: kiphenglim
 */

#ifndef POINT_HPP_
#define POINT_HPP_
#endif /* POINT_HPP_ */

#pragma once

class Point			// the order below is not required by C++ but is a good standard
{
private:			// put the fields first; for our purposes, fields will always be private
	double x;		// x coordinate for a point in the xy-plane
	double y;		// y coordinate for a point in the xy-plane
public:				// put the public methods next, starting with the constructors
	Point(double xvalue, double yvalue); // constructor
	void move(double dx, double dy);	// move this Point from (x, y) to (x + dx, y + dy)
	double get_x() const;	// use const when the method does not change a state variable
	double get_y() const;	// use const when the method does not change a state variable
	void printX() const;	// print in the format (x, y); e.g., (1, 2) if x == 1 and y == 2
	void printY() const;	// print in the format (x, y); e.g., (1, 2) if x == 1 and y == 2
	double distance() const; // distance of this Point from the origin
private:			// add any private helper methods here (none for this project)
};
