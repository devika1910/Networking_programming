#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/sem.h>
#include<sys/shm.h>
#include<string.h>
#include<sys/ipc.h>
union semun{
int val;
struct semid_ds *array;
unsigned short buf;
}arg;


 void main()
 {
  int shmid,semid;
  char *s;
  
  arg.val=5;
  key_t key;
  struct sembuf sb;
  int temp,t,t1;
  shmid=shmget((key_t)414,2014,0666|IPC_CREAT);
  s=(char*)shmat(shmid,(void *)0,0); 
  key=ftok("semphore.c",'A');
  
  semid=semget(key,1,0666|IPC_CREAT);
  printf("sem id is :%d",semid);
  temp=semctl(semid,0,SETVAL,arg.val);
  printf("sem cntl value :%d",temp);
  t=semctl(semid,0,GETVAL);
  printf("semcntl :%d",t);
  t1=semop(semid,(struct sembuf *)&sb,arg.val);
  printf("sem op:%d",t1);
  
 }
