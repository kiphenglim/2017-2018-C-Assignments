/*
 * Clock.hpp
 *
 *  Created on: 27 Jan 2019
 *      Author: kiphenglim
 */

#ifndef CLOCK_HPP_
#define CLOCK_HPP_
#endif /* CLOCK_HPP_ */

#pragma once

class Clock
{
private:
	const unsigned MILITARY = 0; // use MILITARY instead of 0 in your program
	const unsigned STANDARD = 1; // use STANDARD instead of 1 in your program
	int dy;
	int hr;
	int mn;
	int sc;
public:
	Clock();
	Clock(int d, int h, int m, int s);
	int get_day() const;
	int get_hour(unsigned format) const;
	int get_minute() const;
	int get_second() const;
	void spring_forward();
	void fall_back();
	void add(int d, int h, int m, int s);
	void subtract(int d, int h, int m, int s);
	void print(unsigned format) const;
	void convert(int d, int h, int m, int s);
};
