#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
 int pid;
 pid=fork();
 if(pid==0)
 {
 printf("this is chid i.e fork");
 }
 else
 {
   printf("this is parent");
 }
}
