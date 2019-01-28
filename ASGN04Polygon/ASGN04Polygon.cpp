/*
 * ASGN04Polygon.cpp
 *
 *  Created on: 27 Jan 2019
 *      Author: kiphenglim
 */

#include "stdafx.hpp"

int main()
{
	double x, y;
	cout << "Enter 4 points to form a polygon with 4 lines as prompted below." << endl;
	cout << "line 1 of the polygon will be (point 1) - (point 2)" << endl;
	cout << "line 2 of the polygon will be (point 2) - (point 3)" << endl;
	cout << "line 3 of the polygon will be (point 3) - (point 4)" << endl;
	cout << "line 4 of the polygon will be (point 4) - (point 1)" << endl << endl;

	cout << "Enter point 1 of line 1 (which is point 2 of line 4):" << endl;

	cout << "x = ";
	cin >> x;

	cout << "y = ";
	cin >> y;

	Point* p1 = new Point(x, y);

	cout << "Enter point 1 of line 2 (which is point 2 of line 1):" << endl;

	cout << "x = ";
	cin >> x;

	cout << "y = ";
	cin >> y;

	Point* p2 = new Point(x, y);

	cout << "Enter point 1 of line 3 (which is point 2 of line 2):" << endl;

	cout << "x = ";
	cin >> x;

	cout << "y = ";
	cin >> y;

	Point * p3 = new Point(x, y);

	cout << "Enter point 1 of line 4 (which is point 2 of line 3):" << endl;

	cout << "x = ";
	cin >> x;

	cout << "y = ";
	cin >> y;

	Point* p4 = new Point(x, y);

	Polygon* polygon = new Polygon(p1, p2, p3, p4);

	forever
	{
		double dx, dy;
		string option;

		cout << "Please select an option from the list below:" << endl;
		cout << "  1.  Line1" << endl;
		cout << "  2.  Line2" << endl;
		cout << "  3.  Line3" << endl;
		cout << "  4.  Line4" << endl;
		cout << "  5.  move" << endl;
		cout << "  6.  isrectangle" << endl;
		cout << "  7.  perimeter" << endl;
		cout << "  8.  area" << endl;
		cout << "  9.  print" << endl;
		cout << "  10. quit" << endl;

		cin >> option;

		if ("Line1" == option || option == "1")
		{
			polygon->get_line1()->print();
			cout << endl;
		}

		else if ("Line2" == option || option == "2")
		{
			polygon->get_line2()->print();
			cout << endl;
		}

		else if ("Line3" == option || option == "3")
		{
			polygon->get_line3()->print();
			cout << endl;
		}

		else if ("Line4" == option || option == "4")
		{
			polygon->get_line4()->print();
			cout << endl;
		}

		else if ("move" == option || option == "5")
		{
			cout << "dx = ";
			cin >> dx;
			cout << "dy = ";
			cin >> dy;
			polygon->move(dx, dy);
			cout << endl;
		}

		else if ("isrectangle" == option || option == "6")
		{
			if (polygon->isRectangle())
			{
				cout << "rectangle" << endl;
			}
			else
			{
				cout << "not a rectangle" << endl;
			}
		}

		else if ("perimeter" == option || option == "7")
		{
			cout << polygon->perimeter() << endl;
		}

		else if ("area" == option || option == "8")
		{
			double area = polygon->area();
			if (area >= 0)
			{
				cout << area << endl;
			}
			else
			{
				cout << "not a rectangle" << endl;
			}
		}

		else if ("print" == option || option == "9")
		{
			polygon->print();
		}

		else if ("quit" == option || option == "10")
		{
			break;
		}

		else
		{
			cout << "INPUT ERROR; TRY AGAIN!" << endl;
		}
	}

	system("pause");
	return 0;
}
