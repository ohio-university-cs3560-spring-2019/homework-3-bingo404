//Name:	Bryan Long
//Program: hw fixed
//Description:	This is the cc file
//Date: 2/11/19

#include <iostream>

#include <vector>

#include <cmath>


/**
*	\file
*	\brief
*	\param a
*	\param n
*	\return
**/







double deviation(int* a, int n )

{

	int sum = 0; 


	for(size_t i = 0; i <= n - 1; i++)

	{

		sum += a[i];

	}


	double mean = sum/=(n-1);

	double stdev = 0;


	for(size_t i = 0; i <= n - 2; i++)

	{

		stdev += (a[i] - mean) * (a[i] - mean);

	}

	stdev /= (n-1);


	if(stdev == 0)

	{

		std::cout << "Sigma is zero." << std::endl;

	}

	return sqrt(stdev);

}


