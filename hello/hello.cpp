#include<iostream>
#include<pthread.h>
using namespace std;
void *thread1(void*);
int main()
{
	//char c[] = "hello";
	//cout<<sizeof(c);	
	//cout<<"hello world\n";
	//cout<<sizeof(int);
	int id;
	pthread_create(&id,NULL,thread1,NULL);
	sleep(1);
	cout<<"this is main thread."<<endl;
	return 0;
}
void *thread1(void*)
{
	cout<<"this is a test thread."<<endl;
}