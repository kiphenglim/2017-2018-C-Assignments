/*
 * ASGN05Clock.cpp
 *
 *  Created on: 27 Jan 2019
 *      Author: kiphenglim
 */


#include "stdafx.hpp"

int main()
{
	bool more = true;
	Clock* clock = new Clock();

	while (more)
	{
		cout << "1 : daylight" << endl;
		cout << "2 : standard" << endl;
		cout << "3 : add" << endl;
		cout << "4 : subtract" << endl;
		cout << "5 : print" << endl;
		cout << "6 : day" << endl;
		cout << "7 : hour" << endl;
		cout << "8 : minute" << endl;
		cout << "9 : second" << endl;
		cout << "10: quit" << endl;
		cout << "CHOICE: ";
		int choice;
		cin >> choice;
		cout << endl;

		switch (choice)
		{
			case 1:  //daylight
			{
				cout << "DAYLIGHT" << endl;
				clock->spring_forward();
				break;
			}
			case 2:  //standard
			{
				cout << "STANDARD" << endl;
				clock->fall_back();
				break;
			}
			case 3:  //add
			{
				cout << "ADD" << endl;
				cout << "day ";
				int d;
				cin >> d;
				cout << "hour ";
				int h;
				cin >> h;
				cout << "minute ";
				int m;
				cin >> m;
				cout << "second ";
				int s;
				cin >> s;
				clock->add(d, h, m, s);
				break;
			}
			case 4:  //subtract
			{
				cout << "SUBTRACT" << endl;
				cout << "day ";
				int d;
				cin >> d;
				cout << "hour ";
				int h;
				cin >> h;
				cout << "minute ";
				int m;
				cin >> m;
				cout << "second ";
				int s;
				cin >> s;
				clock->subtract(d, h, m, s);
				break;
			}
			case 5:  //print
			{
				cout << "PRINT" << endl;
				cout << "Format: ";
				int format;
				cin >> format;
				clock->print(format);
				break;
			}
			case 6:  //day
			{
				cout << "DAY" << endl;
				cout << clock->get_day() << endl;
				break;
			}
			case 7:  //hour
			{
				cout << "HOUR" << endl;
				cout << "Format: ";
				int format;
				cin >> format;
				cout << clock->get_hour(format) << endl;
				break;
			}
			case 8:  //minute
			{
				cout << "MINUTE" << endl;
				cout << clock->get_minute() << endl;
				break;
			}
			case 9:  //second
			{
				cout << "SECOND" << endl;
				cout << clock->get_second() << endl;
				break;
			}
			case 10: //quit
			{
				cout << "QUIT" << endl;
				more = false;
				break;
			}
			case 0: //reset
			{
				cout << "RESET" << endl;
				clock = new Clock();
				break;
			}
			default: //input errors
			{
				cout << "INPUT ERROR" << endl;
				break;
			}
		}

		cout << endl;
	}
    return 0;
}
