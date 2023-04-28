#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
 int fd,nob=-1;
 char str[25];
 fd=open("csef",O_RDONLY);
 while(nob==-1)
  {
    nob=read(fd,str,22);
  }
  write(1,str,22);
  close(fd);
}
