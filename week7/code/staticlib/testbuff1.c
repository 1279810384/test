#include <stdio.h>
#include <stdlib.h>
#define SIZE 512

int main(int argc, char* argv[])
{
	char buf[SIZE];
	if (setvbuf(stdin, buf, _IONBF, SIZE) != 0)
	{
		perror("jiang biao zhun shu ru stdin de shu ru she zhi wei wu huan chong shi bai!\n");
		return 1;
	}
	printf("jiang biao zhun shu ru stdin de shu ru she zhi wei wu huan chong cheng gong!\n");
	printf("stdin lei xing wei");
	if (stdin->_flags & _IO_UNBUFFERED) printf("wu huan chong\n");
	else if (stdin->_flags & _IO_LINE_BUF) printf("hang huan chong\n");
	else printf("quan huan chong\n");
	printf("huan chong qu da xiao wei%ld\n", stdin->_IO_buf_end - stdin->_IO_buf_base);
	printf("wen jian miao shu fu wei%d\n", fileno(stdin));
	if (setvbuf(stdin, buf, _IOFBF, SIZE) != 0)
	{
		printf("jiang biao zhun shu ru stdin de shu ru she zhi wei quan huan chong shi bai!\n");
		return 2;
	}
	printf("xiu gai biao zhun shu ru stdin de lei xing cheng gong!\n");
	printf("stdin lei xing wei");
	if (stdin->_flags & _IO_UNBUFFERED) printf("wu huan chong\n");
	else if (stdin->_flags & _IO_LINE_BUF) printf("hang huan chong\n");
	else printf("quan huan chong\n");
	printf("huan chong qu da xiao wei%ld\n", stdin->_IO_buf_end - stdin->_IO_buf_base);
	printf("wen jian miao shu fu wei%d\n", fileno(stdin));
	return 0;
}
