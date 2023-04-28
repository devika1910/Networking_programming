#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
 int pid,p[2];
 char str[25];
 pipe(p);
 pid=fork();
 if(pid==0)
 {
  read(p[0],str,12);
  write(1,str,12);
 }
 else
 {
 write(p[1],"hellodevika",12);
 }
}
