#include "fun.h"

void fun1(int* a, int b)
{
	int i,j;
	int x;
	for(i = 1;i < b;i++)
	{
		for(j = 0;j < b - i;j++)
		{
			if(a[j] > a[j+1])
			{
				x = a[j];
				a[j] = a[j+1];
				a[j+1] = x;
			}
		}
	}
}

void fun2(int* a, int b)
{
	int i,j;
	int x;
	for(i = 1;i < b;i++)
	{
		for(j = 0;j < b - i;j++)
		{
			if(a[j] < a[j+1])
			{
				x = a[j];
				a[j] = a[j+1];
				a[j+1] = x;
			}
		}
	}
}

int fun3(int* a,int b)
{
	int i;
	int x = 0;
	for(i = 0;i < b;i++) x = x + a[i];
	return x;
}

int fun4(int* a,int b)
{
	return fun3(a,b) / b;
}

stu1 fun5(int* a, int b)
{
	struct stu1 s;
	s->sum = fun3(a,b);
	s->ave = fun4(a,b);
	return s;
}





