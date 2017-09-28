/*
 * Copyright (c) liudonghai
 * 
 * This code and algorithms created by liudonghai, only used in 
 * learning and communication.
 *
 */


#include <iostream>
#include <pthread.h>
#include "../header/test.h"

#include "../header/liudonghai.h"


using namespace std;

int main()
{
	pthread_t id;
	pthread_create(&id,NULL,thread_test1,NULL);
	test1();
	test2();
	pthread_join(id,0);
	cout<<"this is main thread."<<endl;
	
	return 0;
}