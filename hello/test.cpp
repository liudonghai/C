/*
 * Copyright (c) liudonghai
 * 
 * This code and algorithms created by liudonghai, only used in 
 * learning and communication.
 *
 */


#include "../header/test.h"


void test1(void)
{
	
	iTest = 10;
	cout<<"Test1 function"<<endl;
}
void *thread_test1(void*)
{
	cout<<"this is a test thread."<<endl;
}


