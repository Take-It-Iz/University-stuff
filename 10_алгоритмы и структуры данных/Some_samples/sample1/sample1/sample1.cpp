// sample1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
const int X = 3;

int main()
{
    //std::cout << "Hello World!\n";
	int i, j;
	int *arr1 = new int[X];
	for (i = 0; i < X; i++)
	{
		arr1[i] = 1;
		cout << arr1[i] << '\t';
	}
	cout << '\n';

	cout << "&arr1 - expression : " << &arr1 << '\n';
	cout << "&arr1[0] - expression : " << &arr1[0] << '\n';
	cout << "arr1 - expression : " << arr1 << '\n';
	cout << "*arr1 - expression : " << *arr1 << '\n';
}