#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/shm.h>
#include<string.h>
int main()
{
 int pid,shmid;
 char *str;
 shmid=shmget((key_t)108,1024,0666|IPC_CREAT);
 str=(char *)shmat(shmid,(void *)0,0);
 pid=fork();
 if(pid==0)
 {
   write(1,str,9);
 }
 strcpy(str,"hello shm");

}
