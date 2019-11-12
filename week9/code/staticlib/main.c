#include "my.h"
static void __attribute__ ((constructor)) before_main(void)
{
	printf("-1:Running befored main!\n");
}
static void __attribute__ ((destructor)) after_main(void)
{
	printf("9999:Running after main!\n");
}
static void callback1()
{
	printf("1:Running after main!\n");
}
static void callback2()
{
	printf("2:Running after main!\n");
}
int main()
{
	printf("Main!\n");
	return 0;
}
