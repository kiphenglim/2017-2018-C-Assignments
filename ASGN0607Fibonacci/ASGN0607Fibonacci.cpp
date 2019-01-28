/*
 * ASGN0607.cpp
 *
 *  Created on: 27 Jan 2019
 *      Author: kiphenglim
 */

#include "stdafx.hpp"

int main()
{
	cout << "COMMENCE: FIBONACCI SEQUENCE ..." << endl;
	cout << "__________________________________________" << endl;
	cout << endl;

	bool more = true;

	Fibonacci* fib = new Fibonacci();

	while ( more != false )
	{
		cout << "1: RECURSIVE IMPLEMENTATION" << endl;
		cout << "2: LOOP IMPLEMENTATION" << endl;
		cout << "3: VECTOR IMPLEMENTATION" << endl;
		cout << "4: QUIT FIBONACCI SEQUENCE" << endl;

		cout << endl;

		cout << "CHOICE ... ";
		int c;
		cin >> c;

		switch (c)
		{

			case 1:
			{
				cout << "F(N) ; INPUT N ... ";
				int n;
				cin >> n;
				cout << endl;

				auto start = chrono::high_resolution_clock::now();

				cout << "F(" << n << ") = " << fib->recFib( n ) << endl;

				auto finish = chrono::high_resolution_clock::now();
				chrono::duration<double> elapsed = finish - start;
				std::cout << "TIME: " << elapsed.count() << " SECONDS";

				break;
			}
			case 2:
			{
				cout << "F(N) ; INPUT N ... ";
				int n;
				cin >> n;
				cout << endl;

				auto start = chrono::high_resolution_clock::now();

				cout << "F(" << n << ") = " << fib->loopFib( n ) << endl;

				auto finish = chrono::high_resolution_clock::now();
				chrono::duration<double> elapsed = finish - start;
				std::cout << "TIME: " << elapsed.count() << " SECONDS";

				break;
			}
			case 3:
			{
				cout << "F(N) ; INPUT N ... ";
				int n;
				cin >> n;
				cout << endl;

				auto start = chrono::high_resolution_clock::now();

				cout << "F(" << n << ") = " << fib->vectorFib( n ) << endl;

				auto finish = chrono::high_resolution_clock::now();
				chrono::duration<double> elapsed = finish - start;
				std::cout << "TIME: " << elapsed.count() << " SECONDS";

				break;
			}
			case 4:
			{
				more = false;
				break;
			}
			default:
			{
				cout << "INPUT ERROR" << endl;
			}
		}

		cout << endl;
		cout << endl;
		cout << endl;
	}

    return 0;
}
