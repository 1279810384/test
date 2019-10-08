#include <stdio.h>
#include "fun.h"

int main()
{
	int a[5] = {3,2,4,1,5};
	struct stu1 s = fun5(a, 5);
	printf("%d\n", a[0]);
	printf("%d\n", a[1]);
	printf("%d\n", a[2]);
	printf("%d\n", a[3]);
	printf("%d\n", a[4]);
	printf("%d\n", s->sum);
	printf("%d\n", s->ave);
	return 0;
}
