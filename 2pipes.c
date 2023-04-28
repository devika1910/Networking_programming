#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
 int pid,p[2],q[2];
 char str1[25],str2[25];
 pipe(p);
 pipe(q);
 
 pid=fork();
 if(pid==0)
 {
    read(p[0],str1,15);
    write(1,str1,15);
    write(q[1],"frm pipe 2:",12);
 }
 else
 {
  write(p[1],"frm pipe 1:",12);
  read(q[0],str2,12);
  write(1,str2,12);
 }
}
