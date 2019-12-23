#include "my.h"

char buf[100];
char buf1[]="child file\n";
char buf2[]="parent file\n";

int main()
{
	FILE* fp;
	pid_t pid;

	fp=fopen("text.txt","w+");

	printf("before fork\n");
	if((pid=fork())<0)
	{
		perror("failed to fork!\n");
	}
	else if(pid>0)
	{
		fwrite(buf2, sizeof(char), 12, fp);
	}
	else
	{
		fwrite(buf1, sizeof(char), 11, fp);
		exit(0);
	}

	fseek(fp, 0, SEEK_SET);
	fread(buf, sizeof(char), 100, fp);	
	printf("%s\n",buf);		
	fclose(fp);
	exit(0);
}
