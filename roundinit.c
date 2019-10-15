#include "roundinit.h"

void roundinit(int* a)
{
	int i;

	srand((unsigned)time(NULL));

	for(i = 0; i < 100; i++)
	{
		a[i] = rand()%100 +1;
	}
}
