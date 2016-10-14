// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "cmath"

float my_avg(int *x, int size) {
	float num = 0;
	for (int i = 0; i < size; i++) {
		num += x[i];
	}
	return num/size;
}

int main()
{
	int arr[6] = { 1,2,3,4,5,6 };
	std::cout << my_avg(arr, 6);
	std::cin.get();
    return 0;
}

