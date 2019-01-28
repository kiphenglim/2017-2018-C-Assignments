/*
 * Polygon.hpp
 *
 *  Created on: 27 Jan 2019
 *      Author: kiphenglim
 */

#ifndef POLYGON_HPP_
#define POLYGON_HPP_
#endif /* POLYGON_HPP_ */

#pragma once
#include "stdafx.hpp"

class Polygon
{
private:
	Line* line1;
	Line* line2;
	Line* line3;
	Line* line4;
public:
	Polygon(Point* p1, Point* p2, Point* p3, Point* p4);
	Line* get_line1() const;
	Line* get_line2() const;
	Line* get_line3() const;
	Line* get_line4() const;
	void move(double dx, double dy);
	bool isRectangle() const;
	double perimeter() const;
	double area() const;
	void print() const;
};
