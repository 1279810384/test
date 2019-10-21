#include "max.h"

int max(int* a)
{
	int i,x;
	x = a[0];

	for(i = 1; i < 100; i++)
	{
		if(x < a[i]) x = a[i];
	}

	return x;
}
