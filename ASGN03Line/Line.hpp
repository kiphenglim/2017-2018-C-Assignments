/*
 * Line.hpp
 *
 *  Created on: 27 Jan 2019
 *      Author: kiphenglim
 */

#ifndef LINE_HPP_
#define LINE_HPP_
#endif /* LINE_HPP_ */

#pragma once
#include "stdafx.hpp"

class Line
{
private:
	Point* point1;	// one end point of this Line
	Point* point2;	// the other endpoint of this Line
public:
	Line(Point* p1, Point* p2); // constructor
	Point* get_point1() const;	// accessor to point1
	Point* get_point2() const;	// accessor to point2
	double length() const; // returns the length of this Line
	double slope() const; // returns the slope of this line
	void move_point1(double dx, double dy); // mutator to move point 1 of this Line by (dx, dy)
	void move_point2(double dx, double dy); // mutator to move point 2 of this Line by (dx, dy)
	void move(double dx, double dy);	// mutator to move this Line by (dx, dy)
	bool isParallel(Line* line) const; // true if this Line and line are parallel
	bool isPerpendicular(Line* line) const; // true if this Line and line are perpendicular
	void print() const;		// print in the format (x1, y1) – (x2, y2); e.g., (1, 2) – (-2, -1)
private:
	bool equals(double d1, double d2) const; // true if d1 and d2 are within EPSILON
};
