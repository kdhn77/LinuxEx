#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int glob =6;
int main(void)
{
		int var;
		pid_t pid;

		var=88;
		printf("before vfork\n");
		printf("pid = %d, glob = %d, var = %d\n",getpid(),glob,var);
		if((pid=vfork())<0)
			printf("vfork error");
		else if(pid ==0)
		{
				glob++;
				var ++;
				
				exit(0);
		}
		printf("pid = %d, glob = %d, var = %d\n",getpid(),glob,var);
		exit(0);
}
