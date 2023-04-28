#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
 int pid;
 pid=fork();
 printf("hai1");
 exit(0);
 printf("hai2");
 
}
