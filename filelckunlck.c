#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
 void main()
 {
int fd,temp;
char str[25];
struct flock l1;
fd=open("program.dat",O_RDWR);
if(fd>=0)
{
 read(fd,str,12);
 write(1,str,12);
 printf("opend succesfully:%d\n",fd);
}
else
{
printf("error");
}
l1.l_type=F_RDLCK;
l1.l_whence=SEEK_SET;
l1.l_start=0;
l1.l_len=0;
l1.l_pid=getpid();


temp=fcntl(fd,F_SETLK,&l1);
if(temp>=0)
{
 printf("locked succesfully:%d\n",temp);
}
else
{
printf("error fcnl\n");
}
l1.l_type=F_UNLCK;
temp=fcntl(fd,F_SETLK,&l1);
if(temp>=0)
{
 printf("UNlocked succesfully:%d\n",temp);
}
else
{
printf("error fcnl\n");
}
}
 
