/*
 * ASGN14CNumbers.cpp
 *
 *  Created on: 27 Jan 2019
 *      Author: kiphenglim
 */

#include "stdafx.hpp"

int main()
{
	cout << "C1 A: ";
	double a1;
	cin >> a1;

	cout << "C1 B: ";
	double b1;
	cin >> b1;

	C_Number c1( a1 , b1 );

	cout << endl;


	cout << "C2 A: ";
	double a2;
	cin >> a2;

	cout << "C2 B: ";
	double b2;
	cin >> b2;

	C_Number c2( a2 , b2 );

	cout << endl;


	bool more = true;

	while ( more )
	{
		cout << "  1   C1*" << endl;
		cout << "  2   C2*" << endl;
		cout << "  3   |C1|" << endl;
		cout << "  4   |C2|" << endl;
		cout << "  5   C1 + C2" << endl;
		cout << "  6   C1 - C2" << endl;
		cout << "  7   C1 * C2" << endl;
		cout << "  8   C1 / C2" << endl;
		cout << "  9   C1 == C2" << endl;
		cout << "  10  SCALE C1" << endl;
		cout << "  11  SCALE C2" << endl;
		cout << "  12  MOVE C1" << endl;
		cout << "  13  MOVE C2" << endl;
		cout << "  14  SHIFT C1" << endl;
		cout << "  15  SHIFT C2" << endl;
		cout << "  16  PRINT C1" << endl;
		cout << "  17  PRINT C2" << endl;
		cout << "  18  QUIT" << endl;

		cout << endl;
		int option;
		cout << "CHOICE: ";
		cin >> option;

		switch ( option )
		{
			case 1:
			{
				c1.conjugate().print();
				cout << endl;
				break;
			}
			case 2:
			{
				c2.conjugate().print();
				cout << endl;
				break;
			}
			case 3:
			{
				cout << c1.magnitude() << endl;
				break;
			}
			case 4:
			{
				cout << c2.magnitude() << endl;
				break;
			}
			case 5:
			{
				(c1 + c2).print();
				cout << endl;
				break;
			}
			case 6:
			{
				(c1 - c2).print();
				cout << endl;
				break;
			}
			case 7:
			{
				(c1 * c2).print();
				cout << endl;
				break;
			}
			case 8:
			{
				(c1 / c2).print();
				cout << endl;
				break;
			}
			case 9:
			{
				if ( c1 == c2 )
				{
					cout << "EQUAL" << endl;
				}
				else
				{
					cout << "NOT EQUAL" << endl;
				}

				break;
			}
			case 10:
			{
				double scalar;
				cout << "SCALE FACTOR: ";
				cin >> scalar;
				c1.scale( scalar );
				break;
			}
			case 11:
			{
				double scalar;
				cout << "SCALE FACTOR: ";
				cin >> scalar;
				c2.scale( scalar );
				break;
			}
			case 12:
			{
				double anew , bnew;
				cout << "NEW A COMPONENT: ";
				cin >> anew;
				cout << "NEW B COMPONENT: ";
				cin >> bnew;
				c1.move( anew , bnew );
				break;
			}
			case 13:
			{
				double anew , bnew;
				cout << "NEW A COMPONENT: ";
				cin >> anew;
				cout << "NEW B COMPONENT: ";
				cin >> bnew;
				c2.move( anew , bnew );
				break;
			}
			case 14:
			{
				double da , db;
				cout << "A SHIFT: ";
				cin >> da;
				cout << "B SHIFT: ";
				cin >> db;
				c1.shift( da , db );
				break;
			}
			case 15:
			{
				double da , db;
				cout << "A SHIFT: ";
				cin >> da;
				cout << "B SHIFT: ";
				cin >> db;
				c2.shift( da , db );
				break;
			}
			case 16:
			{
				c1.print();
				cout << endl;
				break;
			}
			case 17:
			{
				c2.print();
				cout << endl;
				break;
			}
			case 18:
			{
				more = false;
				break;
			}
			default:
			{
				cout << "INPUT ERROR" << endl;
				break;
			}
		}

		cout << endl << endl;
	}

	return 0;
}
