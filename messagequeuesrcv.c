#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/msg.h>
#include<sys/types.h>

struct buf{

long m_type;
char m_text[25];

};
void main()
{
 struct buf m1;
 int msgid,p;
 msgid=msgget((key_t)414,0666|IPC_CREAT);
 m1.m_type=1;
 p=msgrcv(msgid,(struct buf *)&m1,sizeof(m1),0,0);
 printf("%d %s",p,m1.m_text);
}
