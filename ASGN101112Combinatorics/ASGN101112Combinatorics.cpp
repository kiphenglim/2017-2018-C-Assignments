/*
 * ASGN101112Combinatorics.cpp
 *
 *  Created on: 27 Jan 2019
 *      Author: kiphenglim
 */

#include "stdafx.hpp"

long long factorial( int n )
{
	if(n == 0) return 1;
	else return n * factorial( n - 1 );
}

long long permutations( int n , int r )
{
	return factorial( n ) / factorial( n - r );
}

long long combinationsFormula( int n , int r )
{
	return factorial( n ) / (factorial( r ) * factorial( n - r ));
}

long long combinationsRecursive( int n , int r )
{
	if ( r == 0 || r == n ) return 1;
	else return combinationsRecursive( n - 1 , r - 1 ) + combinationsRecursive( n - 1 , r );
}

void combUtil( vector<int> arr , vector<int> data, int start , int end , int index , int r )
{
	if ( index == r )
	{
		for ( int j = 0; j < r; j++ ) cout << data [j] << " ";
		cout << endl;
		return;
	}

	for ( int i = start; i <= end && end - i + 1 >= r - index; i++ )
	{
		data [index] = arr [i];
		combUtil( arr , data , i + 1 , end , index + 1 , r );
	}
}

void printCombination( int n , int r )
{
	vector<int> data( r );
	vector <int> arr( n );

	for ( int i = 1; i <= n; i++ )
	{
		arr [i-1] = i;
	}

	combUtil( arr , data , 0 , n - 1 , 0 , r );
}

int main()
{
	int n;
	int r;
	string choice;

	for( ;; )
	{
		cout << "IMPLEMENT COMBINATORICS? ";
		cin >> choice;

		if ("Y" == choice || "y" == choice)
		{
			cout << "N = ";
			cin >> n;
			cout << "R = ";
			cin >> r;

			if ( r < 0 || r > n )
			{
				cout << "ERROR! 0 <= R <= N" << endl;
			}

			cout << endl;

			cout << "P: PERMUTATION FORMULA" << endl;
			cout << "F: COMBINATION FORMULA" << endl;
			cout << "R: COMBINATION RECURSION" << endl;
			cout << "T: PRINT COMBINATION (EXTRA CREDIT)" << endl;
			cout << "CHOICE: ";
			cin >> choice;
			cout << endl;

			if (choice == "P" || choice == "p" )
			{
				auto start = chrono::high_resolution_clock::now();
				cout << n << "P" << r << " = " << permutations( n , r ) << endl;
				auto finish = chrono::high_resolution_clock::now();
				chrono::duration<double> elapsed = finish - start;
				cout << endl;
				std::cout << "TIME: " << elapsed.count() << " SECONDS";
			}
			else if ( choice == "F" || choice == "f" )
			{
				auto start = chrono::high_resolution_clock::now();
				cout << n << "C" << r << " = " << combinationsFormula( n , r ) << endl;
				auto finish = chrono::high_resolution_clock::now();
				chrono::duration<double> elapsed = finish - start;
				cout << endl;
				std::cout << "TIME: " << elapsed.count() << " SECONDS";
			}
			else if ( choice == "R" || choice == "r" )
			{
				auto start = chrono::high_resolution_clock::now();
				cout << n << "C" << r << " = " << combinationsRecursive( n , r ) << endl;
				auto finish = chrono::high_resolution_clock::now();
				chrono::duration<double> elapsed = finish - start;
				cout << endl;
				std::cout << "TIME: " << elapsed.count() << " SECONDS";
			}
			else if ( choice == "T" || choice == "t" )
			{
				auto start = chrono::high_resolution_clock::now();
				printCombination( n , r );
				auto finish = chrono::high_resolution_clock::now();
				chrono::duration<double> elapsed = finish - start;
				cout << endl;
				std::cout << "TIME: " << elapsed.count() << " SECONDS";
			}
			else
			{
				cout << "INPUT ERROR" << endl;
			}
		}

		else if ("N" == choice || "n" == choice)
		{
			break;
		}

		else
		{
			cout << "INPUT ERROR" << endl;
		}

		cout << endl << endl << endl;
	}

	return 0;
}
