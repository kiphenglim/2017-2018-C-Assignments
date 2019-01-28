/*
 * Polygon.cpp
 *
 *  Created on: 27 Jan 2019
 *      Author: kiphenglim
 */

#include "stdafx.hpp"

Polygon::Polygon(Point* p1, Point* p2, Point* p3, Point* p4)
{
	line1 = new Line(p1, p2);
	line2 = new Line(p2, p3);
	line3 = new Line(p3, p4);
	line4 = new Line(p4, p1);
}

Line* Polygon::get_line1() const
{
	return line1;
}

Line* Polygon::get_line2() const
{
	return line2;
}

Line* Polygon::get_line3() const
{
	return line3;
}

Line* Polygon::get_line4() const
{
	return line4;
}

void Polygon::move(double dx, double dy)
{
	line1->move(dx, dy);
	line3->move(dx, dy);
	line2 = new Line(line1->get_point2(), line3->get_point1());
	line4 = new Line(line3->get_point2(), line1->get_point1());
}

bool Polygon::isRectangle() const
{
	if (!line1->isPerpendicular(line2)
		|| !line2->isPerpendicular(line3)
		|| !line3->isPerpendicular(line4)
		|| !line4->isPerpendicular(line1)
		|| line1->length() != line3->length()
		|| line2->length() != line4->length())
	{
		return false;
	}
	return true;
}

double Polygon::perimeter() const
{
	return line1->length() + line2->length() + line3->length() + line4->length();
}

double Polygon::area() const
{
	if (this->isRectangle())
	{
		return line1->length() * line2->length();
	}
	return -1;
}

void Polygon::print() const
{
	line1->print();
	cout << endl << "  |         |" << endl;
	line3->reverse()->print();
	cout << endl;
}
