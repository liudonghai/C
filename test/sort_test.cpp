/*
 * Copyright (c) liudonghai
 * 
 * This code and algorithms created by liudonghai, only used in 
 * learning and communication.
 *
 */

#include <iostream>
#include "../inc/sort.h"

using namespace std;

int main()
{
	int arry[10] = {32, 18, 42, 12, 45, 23, 48, 56, 34, 27};
	quick_sort(arry, 0, 9);
	for(int i = 0; i < 10; i++)
	{
		cout<<arry[i]<<endl;
	}
}
