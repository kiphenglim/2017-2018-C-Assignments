/*
 * C_Number.cpp
 *
 *  Created on: 27 Jan 2019
 *      Author: kiphenglim
 */


#include "stdafx.hpp"

const double EPSILON = 0.000001; // used to test double values for equality

C_Number::C_Number( double x , double y )
{
	a = x;
	b = y;
}

double C_Number::getA() const
{
	return a;
}

double C_Number::getB() const
{
	return b;
}

C_Number C_Number::conjugate() const
{
	C_Number answer( getA() , getB() * -1 );
	return answer;
}

double C_Number::magnitude() const
{
	return sqrt(pow(getA(), 2) + pow (getB(), 2));
}

C_Number C_Number::operator+( const C_Number& c ) const
{
	C_Number answer( getA() + c.getA() , getB() + c.getB() );
	return answer;
}

C_Number C_Number::operator-( const C_Number& c ) const
{
	C_Number answer( getA() - c.getA() , getB() - c.getB() );
	return answer;
}

C_Number C_Number::operator*( const C_Number& c ) const
{
	C_Number answer( getA() * c.getA() - getB() * c.getB() , getA() * c.getA() + getB() * c.getB() );
	return answer;
}

C_Number C_Number::operator/( const C_Number& c ) const
{
	C_Number answer( getA() / pow( c.magnitude() , 2 ) , getB() / pow( c.magnitude() , 2 ));
	return answer * c.conjugate();
}

bool C_Number::operator==( const C_Number& c ) const
{
	return ( ( abs( (getA() - c.getA() ) ) <= EPSILON ) && ( ( abs( getB() - c.getB() ) ) <= EPSILON ) );
}

void C_Number::scale( double scale_factor )
{
	a = a * scale_factor;
	b = b * scale_factor;
}

void C_Number::move( double x , double y )
{
	a = x;
	b = y;
}

void C_Number::shift( double da , double db )
{
	a = a + da;
	b = b + db;
}

void C_Number::print() const
{
	cout << "(" << getA() << "," << getB() << ")";
}
