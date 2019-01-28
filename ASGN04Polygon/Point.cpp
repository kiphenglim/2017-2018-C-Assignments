/*
 * Point.cpp
 *
 *  Created on: 27 Jan 2019
 *      Author: kiphenglim
 */

#include "stdafx.hpp"

Point::Point(double xvalue, double yvalue)
{
	x = xvalue;
	y = yvalue;
}

void Point::move(double dx, double dy)
{
	x += dx;
	y += dy;
}

double Point::get_x() const
{
	return x;
}

double Point::get_y() const
{
	return y;
}

void Point::printX() const
{
	//uses the get_x method to get the value of x, then prints x
	cout << get_x() << endl;
}

void Point::printY() const
{
	cout << get_y() << endl;
}

double Point::distance() const
{
	return sqrt(x*x + y*y);
}
