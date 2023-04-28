void main()
{
int sockfd,bv,newsock,clilen;
char str[80];
char num[80];
struct sockaddr_in cli;
cli.sin_family=AF_INET;
cli.sin_port=htons(108);
cli.sin_addr.s_addr=INADDR_ANY;
sockfd=socket(AF_INET,SOCK_DGRAM,0);
printf("\nsocket--------   %d\n",sockfd);
bv=bind(sockfd,(struct sockaddr *)&cli,sizeof(cli));
clilen=sizeof(cli);
sendto(sockfd,"abcdeiouxyzOAts",15,0,(struct sockaddr *)&cli,clilen);
recvfrom(sockfd,num,10,0,(struct sockaddr *)&cli,&clilen);
int count=atoi(num);     //toInt(num);
printf("%d",count);
close(sockfd);
}
