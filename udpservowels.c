#include<sys/socket.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<netinet/in.h>
#include<string.h>
void main()
{
 int sockfd,bv,serlen;
 char str[50];
 char num[26];
 struct sockaddr_in ser;
 ser.sin_family=AF_INET;
 ser.sin_port=htons(108);
 ser.sin_addr.s_addr=INADDR_ANY;
 sockfd=socket(AF_INET,SOCK_DGRAM,0);
 bv=bind(sockfd,(struct sockaddr *)&ser,sizeof(ser));
 serlen=sizeof(ser);
 v=recvfrom(sockfd,str,15,0(struct sockaddr *)&ser,&serlen);
 int i,l=0;
 for(i=0;i<strlen(str);i++)
 {
   if(str[i]=='A' || str[i]=='a' || str[i]=='e'|| str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'|| str[i]=='O'|| str[i]=='u'|| str[i]=='U')
   {
    l++;
   }
 }
 snprintf(num,10,"%d",l);
 sendto(sockfd,num,10,0(struct sockaddr *)&ser,&serlen);
 write(1,str,15);
 close(sockfd);
 
 
}
