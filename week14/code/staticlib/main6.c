#include "my.h"
#define NUM_THREADS 8

void* PrintHello(void* threadid)
{
	int* id_ptr,taskid;
	sleep(1);
	id_ptr=(int*)threadid;
	taskid=*id_ptr;
	printf("Hello from thread %d\n",taskid);
	pthread_exit(NULL);
}
