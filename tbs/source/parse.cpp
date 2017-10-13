/*
 * Copyright (c) liudonghai
 * 
 * This code and algorithms created by liudonghai, only used in 
 * learning and communication.
 *
 */

#include "../inc/parse.h"
#include <stdlib.h>
#include <string>
#include <fstream>
parse::parse()
{
}

parse::~parse()
{
}

void* parse::script_parse(void * pName)
{
	char *pFileName = (char*)pName;
	fstream m_file;
	m_file.open(pFileName, ios::in);
	if(m_file.is_open())
	{
		char cBuffer[MAX_PATH];
		m_file.getline(cBuffer, MAX_PATH);
		cout<< cBuffer<<endl;
	}
	else
	{
		cout<<"Open fail"<<endl;
	}
	cout<<"parse function quit!"<<endl;
	
}

