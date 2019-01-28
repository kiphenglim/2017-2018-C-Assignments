/*
 * ASGN0809PascalTriangle.cpp
 *
 *  Created on: 27 Jan 2019
 *      Author: kiphenglim
 */

#include "stdafx.hpp"

int biCoef( int n , int k )
{
	int res = 1;

	if ( k > n - k ) // C(n, k) = C(n, n-k)
		k = n - k;

	for ( int i = 0; i < k; ++i )
	{
		/*
			Simultaneously computes top and bottom of fraction
			[n * (n - 1) ... * (n - k + 1)] / k!
		*/
		res *= (n - i);
		res /= (i + 1);
	}

	return res;
}

int main()
{
	cout << "PASCAL'S TRIANGLE SEQUENCE" << endl;
	cout << endl;

	bool more = true;

	while ( more )
	{
		cout << ("INPUT NEGATIVE LEVEL TO QUIT: ");
		int lvl;
		cin >> lvl;

		if ( lvl >= 0 )
		{
			vector<vector<int> > psc ( lvl + 1 , vector<int> (lvl + 1));

			for ( int row = 0; row <= lvl; row++ )
			{
				for ( int val = 0; val <= row; val++ )
				{
					psc [row] [val] = biCoef( row , val );
				}
			}

			for ( int row = 0; row <= lvl; row++ )
			{
				for ( int spaces = 0; spaces < (lvl - row); spaces++ )
				{
					cout << "   ";
				}

				for ( int val = 0; val <= row; val++ )
				{
					cout << psc [row] [val] << "      ";
				}

				cout << endl << endl;
			}

			cout << endl;
		}
		else
		{
			more = false;
		}
	}

    return 0;
}
