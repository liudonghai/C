#include <iostream>
#include <unistd.h>
#include <pthread.h>

using namespace std;
int iFlag = 0;
pthread_mutex_t m_Mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t m_Cond = PTHREAD_COND_INITIALIZER;

void* thread1(void *pId);
void* thread2(void*);
int main()
{
	pthread_t iId1;
	pthread_t iId2;
	int iResult1,iResult2;
	iResult2 = pthread_create(&iId2, NULL, thread2, NULL);
	if(iResult2)
	{
		cout<<"Thread2 create fail:"<<iResult2<<endl;
	}
	iResult1 = pthread_create(&iId1, NULL, thread1, &iId2);
	if(iResult1)
	{
		cout<<"Thread1 create fail:"<<iResult1<<endl;
	}
	pthread_cond_wait(&m_Cond, &m_Mutex);
	cout<<"main thread quit"<<endl;
	//pthread_join(iId1,NULL);
	return 0;
}
void* thread1(void *pId)
{
	pthread_t *iId = (pthread_t*)pId;
	cout<<"this is thread1"<<endl;
	pthread_mutex_lock(&m_Mutex);
	if(iFlag == 2)
		pthread_cond_signal(&m_Cond);
	iFlag = 1;
	pthread_mutex_unlock(&m_Mutex);
	pthread_join(*iId, NULL);
	cout<<"Thread1 quit"<<endl;
	//return ;
}
void* thread2(void*)
{
	cout<<"this is thread2"<<endl;
	pthread_mutex_lock(&m_Mutex);
	if(iFlag == 1)
		pthread_cond_signal(&m_Cond);
	iFlag = 2;
	pthread_mutex_unlock(&m_Mutex);
	cout<<"Thread2 quit"<<endl;
}