/*
 * Fibonacci.hpp
 *
 *  Created on: 27 Jan 2019
 *      Author: kiphenglim
 */

#pragma once
#include "stdafx.hpp"

class Fibonacci
{
public:
	Fibonacci();
	long long recFib( int n );
	long long loopFib( int n );
	long long vectorFib( int n );
};