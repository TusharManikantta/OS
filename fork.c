#include<stdio.h>
#include<sys/types.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>

int globalVariable=2;
int main(){

int localVariable=20;i=1;
pid_t pID=fork();

if(pID==0){
printf("in child process");
globalVariable++;
localVariable++;
}
else if(pID<0){
printf("failed to fork");
exit(1);
}
else{
printf("parent process");
printf("\ngolbalVariable:%d",globalVariable);
printf("\nlocalVariable:%d",localVariable);
return 0;
}
}
