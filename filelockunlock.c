#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
 void main()
 {
int fd,temp;
struct flock l1={F_RDLCK,SEEK_SET,0,0,getpid()};
fd=open("program.dat",O_RDWR);
if(fd>=0)
{
 printf("opend succesfully:%d\n",fd);
}
else
{
printf("error");
}
temp=fcntl(fd,F_SETLK,&l1);
if(temp>=0)
{
 printf("locked succesfully:%d\n",temp);
}
else
{
printf("error fcnl\n");
}

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
 
