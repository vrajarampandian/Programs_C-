#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	int mypid, myppid;
	mypid = getpid();
	myppid = getppid();
	printf("Process id %d\n", mypid);
	printf("Parent Process ID %d\n", myppid);
	system("ps  -ef");

return 0;
}
