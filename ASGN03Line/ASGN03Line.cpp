/*
 * ASGN03Line.cpp
 *
 *  Created on: 27 Jan 2019
 *      Author: kiphenglim
 */

#include "stdafx.hpp"

int main()
{
	double x, y;

	cout << "Enter point 1 of line 1:" << endl;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	Point* p1 = new Point(x, y);

	cout << "Enter point 2 of line 1:" << endl;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	Point* p2 = new Point(x, y);

	Line* line1 = new Line(p1, p2);

	cout << "Enter point 1 of line 2:" << endl;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	p1 = new Point(x, y);

	cout << "Enter point 2 of line 2:" << endl;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	p2 = new Point(x, y);

	Line* line2 = new Line(p1, p2);

	forever // you can use this if you add #define forever for(;;) to stdafx.h
	{
		double dx, dy;

		string option;
		cout << "Please select an option from the list below:" << endl;
		cout << "  1-printX1" << endl; // applies to line1 only
		cout << "  2-printY1" << endl; // applies to line1 only
		cout << "  3-printP1" << endl; // applies to line1 only
		cout << "  4-printX2" << endl; // applies to line1 only
		cout << "  5-printY2" << endl; // applies to line1 only
		cout << "  6-printP2" << endl; // applies to line1 only
		cout << "  7-printL1" << endl; // applies to line1 only
		cout << "  8-printL2" << endl; // applies to line2 only
		cout << "  9-length" << endl; // applies to line1 only
		cout << "  10-slope" << endl; // applies to line1 only
		cout << "  11-parallel" << endl; // tests whether line1 and line2 are parallel
		cout << "  12-perpendicular" << endl; // tests whether line1 and line2 are perpendicular
		cout << "  13-move" << endl; // applies to line1 only
		cout << "  14-moveP1" << endl; // applies to line1 only
		cout << "  15-moveP2" << endl; // applies to line1 only
		cout << "  16-quit" << endl;
		cin >> option;

		if (("printX1" == option) || ("1" == option))
		{
			// output the x coordinate of point1 of line1
			cout << line1->get_point1()->get_x() << endl;
		}

		else if (("printY1" == option) || ("2" == option))
		{
			// output the y coordinate of point1 of line1
			cout << line1->get_point1()->get_y() << endl;
		}

		else if (("printP1" == option) || ("3" == option))
		{
			// output point1 of line1 in (x, y) format
			cout << "(" << line1->get_point1()->get_x() << ", "
				<< line1->get_point1()->get_y() << ")" << endl;
		}

		else if (("printX2" == option) || ("4" == option))
		{
			// output the x coordinate of point2 of line1
			cout << line1->get_point2()->get_x() << endl;
		}

		else if (("printY2" == option) || ("5" == option))
		{
			// output the y coordinate of point2 of line1
			cout << line1->get_point2()->get_y() << endl;
		}

		else if (("printP2" == option) || ("6" == option))
		{
			// output point2 of line1 in (x, y) format
			cout << "(" << line1->get_point2()->get_x() << ", "
				<< line1->get_point2()->get_y() << ")" << endl;
		}

		else if (("printL1" == option) || ("7" == option))
		{
			// output line1 in (x1, y1) – (x2, y2) format
			cout << "(" << line1->get_point1()->get_x() << ", "
				<< line1->get_point1()->get_y() << ") - (" << line1->get_point2()->get_x() << ", "
				<< line1->get_point2()->get_y() << ")" << endl;
		}

		else if (("printL2" == option) || ("8" == option))
		{
			// output line2 in (x1, y1) – (x2, y2) format
			cout << "(" << line2->get_point1()->get_x() << ", "
				<< line2->get_point1()->get_y() << ") - (" << line2->get_point2()->get_x() << ", "
				<< line2->get_point2()->get_y() << ")" << endl;
		}

		else if (("length" == option) || ("9" == option))
		{
			// use the appropriate Line method to output the length of line1
			cout << line1->length() << endl;
		}

		else if (("slope" == option) || ("10" == option))
		{
			// use the appropriate Line method to output the slope of line1
			cout << line1->slope() << endl;
		}

		else if (("parallel" == option) || ("11" == option))
		{
			// output “parallel” if line1 and line2 are parallel (within EPSILON)
			// output “not parallel” otherwise
			if (line1->isParallel(line2))
			{
				cout << "PARALLEL" << endl;
			}
			else
			{
				cout << "NOT PARALLEL" << endl;
			}
		}

		else if (("perpendicular" == option) || ("12" == option))
		{
			// output “perpendicular” if line1 and line2 are perpendicular (within EPSILON)
			// output “not perpendicular” otherwise
			if (line1->isPerpendicular(line2))
			{
				cout << "PERPENDICULAR" << endl;
			}
			else
			{
				cout << "NOT PERPENDICULAR" << endl;
			}
		}

		else if (("move" == option) || ("13" == option))
		{
			// invoke the appropriate Line method to move both line1 endpoints by (dx, dy)
			cout << "dx: " << endl;
			cin >> dx;
			cout << "dy: " << endl;
			cin >> dy;
			line1->move(dx, dy);
		}

		else if (("moveP1" == option) || ("14" == option))
		{
			// move point1 of line1 by (dx, dy)
			cout << "dx: " << endl;
			cin >> dx;
			cout << "dy: " << endl;
			cin >> dy;
			line1->move_point1(dx, dy);
		}

		else if (("moveP2" == option) || ("15" == option))
		{
			// move point2 of line1 by (dx, dy)
			cout << "dx: " << endl;
			cin >> dx;
			cout << "dy: " << endl;
			cin >> dy;
			line1->move_point2(dx, dy);
		}

		else if (("quit" == option) || ("16" == option))
		{
			break;
		}

		else
		{
			cout << "INPUT ERROR; TRY AGAIN!" << endl;
		}
	}

	system("pause"); // or use Ctrl + F5 to run the program
	return 0;
}
