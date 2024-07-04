
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<unistd.h>
int main(){
    int sersocket,port;
    struct sockaddr_in seraddr,cliaddr;
    char msg[50];
    //Server Socket Creation
    sersocket=socket(AF_INET,SOCK_DGRAM,0);
    if(sersocket<0){
        printf("Error!");
        exit(EXIT_FAILURE);
    }
    //bind Socket
    printf()
}
