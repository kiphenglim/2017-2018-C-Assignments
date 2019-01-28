/*
 * Clock.cpp
 *
 *  Created on: 27 Jan 2019
 *      Author: kiphenglim
 */

#include "stdafx.hpp"

Clock::Clock()
{
	dy = 1;
	hr = 00;
	mn = 00;
	sc = 00;
}

Clock::Clock(int d, int h, int m, int s)
	: dy(d), hr(h), mn(m), sc(s)
{
	convert(dy, hr, mn, sc);
}

int Clock::get_day() const
{
	return dy;
}

int Clock::get_hour(unsigned format) const
{
	if (format == MILITARY)
	{
		return hr;
	}
	else
	{
		if (hr == 0 || hr == 12 || hr == 24)
		{
			return 12;
		}
		return hr % 12;
	}
}

int Clock::get_minute() const
{
	return mn;
}

int Clock::get_second() const
{
	return sc;
}

void Clock::spring_forward()
{
	add(0, 1, 0, 0);
}

void Clock::fall_back()
{
	subtract(0, 1, 0, 0);
}

void Clock::add(int d, int h, int m, int s)
{
	convert(dy + d, hr + h, mn + m, sc + s);
}

void Clock::subtract(int d, int h, int m, int s)
{
	convert(dy - d, hr - h, mn - m, sc - s);
}

void Clock::print(unsigned format) const
{
	if (format == MILITARY)
	{
		cout << "DAY " << get_day() <<
			" TIME ";

		if (get_hour(format) < 10)
		{
			cout << 0;
		}

		cout << get_hour(format) << ":";

		if (get_minute() < 10)
		{
			cout << 0;
		}

		cout << get_minute() << ":";

		if (get_second() < 10)
		{
			cout << 0;
		}

		cout << get_second() << endl;
	}

	else
	{
		cout << "DAY " << get_day() <<
			" TIME ";

		if (get_hour(format) < 10)
		{
			cout << 0;
		}

		cout << get_hour(format) << ":";

		if (get_minute() < 10)
		{
			cout << 0;
		}

		cout << get_minute() << ":";

		if (get_second() < 10)
		{
			cout << 0;
		}

		cout << get_second();

		if (get_hour(MILITARY) < 12)
		{
			cout << " AM" << endl;
		}
		else
		{
			cout << " PM" << endl;
		}
	}
}

void Clock::convert(int d, int h, int m, int s)
{
	sc = s;
	int addmin = sc / 60;

	if (sc % 60 >= 0)
	{
		sc = sc % 60;
	}
	else
	{
		sc = 60 + sc % 60;
		addmin--;
	}

	mn = m + addmin;
	int addhour = mn / 60;

	if (mn % 60 >= 0)
	{
		mn = mn % 60;
	}
	else
	{
		mn = 60 + mn % 60;
		addhour--;
	}

	hr = h + addhour;
	int addday = hr / 24;

	if (hr % 24 >= 0)
	{
		hr = hr % 24;
	}

	else
	{
		hr = 24 + hr % 24;
		addday--;
	}

	dy = d + addday;
}
