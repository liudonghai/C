/*
 * Copyright (c) liudonghai
 * 
 * This code and algorithms created by liudonghai, only used in 
 * learning and communication.
 *
 */

#include <iostream>
#include "../inc/list_node.h"
using namespace std;


Change_Node_t*  ChangeNode(Change_Node_t *pHead);
void ChangeNodeBegin();
void PrintArry();


int main()
{
	//PrintArry();
	ChangeNodeBegin();
}


Change_Node_t* ChangeNode(Change_Node_t *pHead)
{
	if(pHead==NULL||pHead->pNext==NULL) return pHead;
	Change_Node_t *p1=pHead;
	Change_Node_t *p2=p1->pNext;
	p1->pNext=NULL;
	while(p2->pNext!=NULL)
	{
		Change_Node_t *p3=p2->pNext;
		p2->pNext=p1;
		p1=p2;
		p2=p3;
	}
	p2->pNext=p1;
	return p2;
}

void ChangeNodeBegin()
{
	Change_Node_t *pHead=new Change_Node_t;
	Change_Node_t *pHeadSave=pHead;
	pHead->n=0;
	pHead->pNext=NULL;
	for(int i=1;i<10;i++)
	{
		Change_Node_t *pNode=new Change_Node_t;
		pHead->pNext=pNode;
		pNode->n=i;
		pNode->pNext=NULL;
		pHead=pHead->pNext;
	}
	pHead=pHeadSave;
	pHead=ChangeNode(pHead);
	while(pHead!=NULL)
	{
		cout<<pHead->n<<endl;
		pHead=pHead->pNext;
	}		
}
void PrintArry()
{
	int	iNumber=12;
 	int a[12]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
 	int aa[3][4]={1, 2,3, 4, 5, 6, 7, 8, 9, 10, 11, 12};;
	int aaa[2][3][2]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	for(int i=0;i<iNumber;i++)
	{
		cout<<*(**aaa+i)<<endl;		
	}
}

