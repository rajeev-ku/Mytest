#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	printf("In program 2 \n");
	int c = fork();
	if(c==0)
	execvp("./prg3",NULL);
	exit(0);
}
