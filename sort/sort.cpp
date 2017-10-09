/*
 * Copyright (c) liudonghai
 * 
 * This code and algorithms created by liudonghai, only used in 
 * learning and communication.
 *
 */

#include <iostream>
#include <assert.h>  

#include "../inc/sort.h"

using namespace std;

 void quick_sort(int* parry, int ibeg, int iend)
{
	assert(parry != NULL);
	
	if ((ibeg < 0) || (iend < 0) || (iend  <= ibeg)) 
		return ;
	
	int ikey = parry[ibeg];
	int i = ibeg;
	int j = iend;
	while (i < j)
	{
		while (i < j && parry[j] >= ikey)
			j--;
		parry[i] = parry[j];
		while (i < j && parry[i] <= ikey)
			i++;
		parry[j] = parry[i];
	}
	parry[i] = ikey;
	quick_sort(parry, ibeg, i-1);
	quick_sort(parry, i+1, iend);
	
	return;
}

