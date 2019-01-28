/*
 * Fibonacci.cpp
 *
 *  Created on: 27 Jan 2019
 *      Author: kiphenglim
 */

#include "stdafx.hpp"

Fibonacci::Fibonacci() {}

long long Fibonacci::recFib( int n )
{
	if ( n == 0 )
	{
		return 0;
	}
	else if ( n == 1 )
	{
		return 1;
	}
	else
	{
		return recFib( n - 1 ) + recFib( n - 2 );
	}
}

long long Fibonacci::loopFib( int n )
{
	/*

	long* arr = new long [n + 1];

	if(n >= 0) arr [0] = 0;
	if(n >= 1) arr [1] = 1;

	for ( int i = 2 ; i <= n ; i++ )
	{
		arr [i] = arr[i - 1] + arr[i - 2];
	}

	long value = arr [n];
	delete [] arr;

	*/

	int zero = 0;
	int one = 1;
	int value = 0;

	for ( int i = 2 ; i <= n ; i++ )
	{
		value = zero + one;
		zero = one;
		one = value;
	}

	return value;
}

long long Fibonacci::vectorFib( int n )
{
	vector <long> fibVect(n + 1);

	if ( n >= 0 ) fibVect [0] = 0;
	if ( n >= 1 ) fibVect [1] = 1;

	for ( int i = 2; i <= n; i++ )
	{
		fibVect [i] = fibVect [i - 1] + fibVect [i - 2];
	}

	return fibVect[n];
}
