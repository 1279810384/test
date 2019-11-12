#include"Create.h"

int create_1(char* s)
{
	if(open(s, O_RDWR|O_CREAT|O_TRUNC, 0777) == -1) return -1;
	else return 0;
}
