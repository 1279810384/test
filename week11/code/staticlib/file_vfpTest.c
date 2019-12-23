#include "my.h"

char buf[100];
char line1[] = "abcde\n";
char line2[] = "fghli\n";

int main()
{
	pid_t pid1;
	FILE *fp;
	int i;
	fp = fopen("demo.txt", "w+");
	printf("Version of vfork()\n");
	pid1 = vfork();
	if(pid1 < 0)
	{
		printf("Process 1 fork failed\n");
	}
	else if(pid1 > 0)
	{
		fwrite(line1, sizeof(char), 6, fp);
	}
	else if(pid1 == 0)
	{
		fwrite(line2, sizeof(char), 6, fp);
		exit(0);
		
	}		
		fseek(fp, 0, SEEK_SET);
		fread(buf, sizeof(char), 100, fp);	
		printf("%s\n",buf);		
		fclose(fp);
		exit(0);
}
