#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
 int pid;
 pid=fork();
 if(pid==0)
 {
   printf("%d",getpid());
 }
 else
 {
   printf("%d",getpid());
 }
}
