#include "my.h"
#define NUM 4

struct info{
	int a;
	int b;
	int c;
	int d;
};

void* fun(void* arg)
{
	int i;
	struct info* pt;
	pt=(struct info*)arg;
	pt->d=0;
	for(i=pt->b;i<pt->c;i++)
	{
		pt->d=pt->d+i;
	}
	printf("%d/n",pt->d);
	return NULL;
}

int main()
{
	pthread_t tid[NUM];
	int i;
	struct info ret[NUM];
	for(i=0;i<NUM;i++)
	{
		ret[i].b=i*100;
		ret[i].c=(i+1)*100;
		ret[i].a=pthread_create(&tid[i],NULL,fun,(void*)i);
		if(ret[i].a!=0)
		{
			printf("thread create failed!\n");
			return -1;
		}
		pthread_join(tid[i],NULL);
	}
	return 0;
}
