#include <stdio.h>
#include <stdlib.h>
#include <wait.h>
#include <sys/types.h>
#include <sys/param.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/times.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <time.h>
#include <pthread.h>
#include <limits.h>
struct sendval{
	int n;
	int s;
};
#define NUM 4
