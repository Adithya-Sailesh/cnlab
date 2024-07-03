#include<sys/socket.h>
#include<stdio.h>
#include<netinet/in.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
    int sersocket,clisocket,port;
    struct sockaddr_in seraddr,cliaddr;
    socklen_t len;
    char msg[50];
    //Creating Server Socket
    sersocket=socket(AF_INET,SOCK_STREAM,0);
    if(sersocket<0){
        printf("Error");
        exit();
    }
    //Bind Socket
    printf("Enter the port value:");
    scanf("%d",&port)

}
