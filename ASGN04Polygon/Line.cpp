/*
 * Line.cpp
 *
 *  Created on: 27 Jan 2019
 *      Author: kiphenglim
 */

#include "stdafx.hpp"

const double EPSILON = 0.000001; // used to test double values for equality

Line::Line(Point* p1, Point* p2) // constructor
	: point1(p1), point2(p2)
{}

Point* Line::get_point1() const	// accessor to point1
{
	// add code to access point1
	return point1;
}

Point* Line::get_point2() const	// accessor to point2
{
	// add code to access point2
	return point2;
}

double Line::length() const // returns the length of this Line
{
	// compute and return the length of this Line with endpoints point1 and point2
	return sqrt( pow((point1->get_x() - point2->get_x()), 2) + pow((point1->get_y() - point2->get_y()), 2) );
}

double Line::slope() const // returns the slope of this line
{
	// compute and return the slope of this Line with endpoints point1 and point2
	return (point2->get_y() - point1->get_y()) / (point2->get_x() - point1->get_x());
}

void Line::move_point1(double dx, double dy)	// mutator to move point 1 of this Line by (dx, dy)
{
	// use the Point method to move point1
	point1->move(dx, dy);
}

void Line::move_point2(double dx, double dy)	// mutator to move point 2 of this Line by (dx, dy)
{
	// use the Point method to move point2
	point2->move(dx, dy);
}

void Line::move(double dx, double dy)	// mutator to move this Line by (dx, dy)
{
	// use only methods in this class to move both point1 and point2 by the same (dx, dy)
	move_point1(dx, dy);
	move_point2(dx, dy);
}

bool Line::isParallel(Line* line) const // true if this Line and line are (approximately) parallel
{
	// add code to test whether this Line and line are parallel, and return the appropriate bool value
	if (equals(this->slope(), line->slope()))
	{
		return true;
	}
	return false;
}

bool Line::isPerpendicular(Line* line) const // true if this Line and line are (approximately) perpendicular
{
	// add code to test whether this Line and line are perpendicular and return the appropriate bool
	if (equals(this->slope(), -1 / line->slope()))
	{
		return true;
	}
	return false;
}

void Line::print() const		// print in the format (x1, y1) - (x2, y2)
{
	// use the print method in class Point to print the line in the desired format
	cout << "(" << point1->get_x() << ", " << point1->get_y() << ")" << " - " << "(" << point2->get_x() << ", " << point2->get_y() << ")" << endl;
}

Line* Line::reverse() const
{
	Line* linex = new Line(this->get_point2(), this->get_point1());
	return linex;
}


bool Line::equals(double d1, double d2) const // true if d1 and d2 are within EPSILON
{
	// add code to return the appropriate bool; use this method in isParallel and isPerpendicular
	if (abs(d1 - d2) <= EPSILON)
	{
		return true;
	}
	return false;
}
