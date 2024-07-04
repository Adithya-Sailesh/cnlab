#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<unistd.h>
int main(){
    int clisocket,port;
    struct sockaddr_in seraddr;
    clisocket=socket(AF_INET,SOCK_STREAM,0);
    if(clisocket<0){
        printf("error");
        exit(0);
    }
    printf("Enter the port:");
    scanf("%d",&port);
    bzero((char*)&seraddr,sizeof(seraddr));
    seraddr.sin_family=AF_INET;
    seraddr.sin_port=htons(port);
    seraddr.sin_addr.s_addr=INADDR_ANY;
    printf("\nTrying to connect to the server.\n");
    if(connect(clisocket,(struct sockaddr*)&seraddr,sizeof(seraddr))<0){
        printf("\nConnection Failed");
        exit(EXIT_FAILURE);
    }
    printf("\nConnection Success!!!!!!!!!!!!\n");
}
