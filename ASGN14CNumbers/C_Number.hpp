/*
 * C_Number.hpp
 *
 *  Created on: 27 Jan 2019
 *      Author: kiphenglim
 */

#ifndef C_NUMBER_HPP_
#define C_NUMBER_HPP_
#endif /* C_NUMBER_HPP_ */

#pragma once

class C_Number
{
private:
	double a;
	double b;
public:
	C_Number( double x , double y );
	double getA() const;
	double getB() const;
	C_Number conjugate() const;
	double magnitude() const;
	C_Number operator+( const C_Number& c ) const;
	C_Number operator-( const C_Number& c ) const;
	C_Number operator*( const C_Number& c ) const;
	C_Number operator/( const C_Number& c ) const;
	bool operator==( const C_Number& c ) const;
	void scale( double scale_factor );
	void move( double x , double y );
	void shift( double da , double db );
	void print() const;
};
