#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
 int fd;
 fd=open("csef",O_WRONLY);
 printf("%d",fd);
 write(fd,"hello this is fifo ipc",22);
 close(fd);
}
