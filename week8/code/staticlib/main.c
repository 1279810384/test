#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include"Create.h"

int main(void)
{
	int fd = 0;
	int fd_write = 0;

	int size = 0;
	char buf[1024] = "test1";

	//fd_write = open(buf, O_RDWR|O_CREAT|O_TRUNC, 0777);
	fd_write = create_1(buf);

	if(fd_write = -1)
	{
		perror("open file:faile");
		exit(1);
	}
	else 	perror("open file:success");
	return 0;
}
