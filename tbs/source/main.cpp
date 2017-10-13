/*
 * Copyright (c) liudonghai
 * 
 * This code and algorithms created by liudonghai, only used in 
 * learning and communication.
 *
 */

#include "../inc/parse.h"
#include <pthread.h>
#include <iostream>
using namespace std;


int main()
{
pthread_t m_parseId;
char FileName[] = "tbs_test.txt";
pthread_create(&m_parseId, NULL, parse::script_parse, FileName);
pthread_join(m_parseId, NULL);
cout<<"main function quit!"<<endl;
return 0;
}


