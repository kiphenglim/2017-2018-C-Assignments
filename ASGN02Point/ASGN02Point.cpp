/*
 * ASGN02Point.cpp
 *
 *  Created on: 27 Jan 2019
 *      Author: kiphenglim
 */

#include "stdafx.hpp"

int main()
{
	cout << "Input initial X value: " << endl;
	int x;
	cin >> x;

	cout << "Input initial Y value: " << endl;
	int y;
	cin >> y;

	Point* point = new Point(x, y);

	for(;;)
	{
		cout << "Select an option: " << endl;
		cout << "	move" << endl;
		cout << "	printX" << endl;
		cout << "	printY" << endl;
		cout << "	printP" << endl;
		cout << "	distance" << endl;
		cout << "	quit" << endl;

		string choice;
		cin >> choice;

		if (choice == "move")
		{
			cout << "Input change in X: " << endl;
			int dx;
			cin >> dx;

			cout << "Input change in Y: " << endl;
			int dy;
			cin >> dy;

			point->move(dx, dy);
		}

		else if (choice == "printX")
		{
			point->printX();
		}

		else if (choice == "printY")
		{
			point->printY();
		}

		else if (choice == "printP")
		{
			cout << "(" << point->get_x() << ", " << point->get_y()  << ")" << endl;
		}

		else if (choice == "distance")
		{
			cout << point->distance() << endl;
		}

		else if (choice == "quit")
		{
			break;
		}

		else
		{
			cout << "ERROR" << endl;
		}
	}

    return 0;
}
