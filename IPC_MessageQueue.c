#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#define MAX_TEXT 512

struct my_msg{
    long int msg_type;
    char some_text[MAX_TEXT];
}

int main()
{
    int msgid;
    struct my_msg some_data;

    key_t key=ftok("msqg_queue_key",'A');
    if((msgid=msgget(key,0666|IPC_CREAT))==-1)
    {
        perror("msgget");
        exit(EXIT_FAILURE);
    }

    some_data.msg_type=1;

    printf("enter some text to send(type end to stop ):\n ");
    while(1)
    {
        fgets(some_data.some_text,MAX_TEXT,stdin);

        if(msgsnd(msgid,(void*)&some_data,MAX_TEXT,0)==-1)
        {
            perro("msgsnd");
            exit(EXIT_FAILURE);
        }

        if(strncmp(some_data.some_text,"end",3)==0)
        {
            break;
        }

        if(msgcrv(msgid,(void*)&some_data,MAX_TEXT,0,0)==-1)
        {
            perror("msgcrv");
            exit(EXIT_FAILURE);
        }
        printf("received back:%s",some_data.some_text);
    }
    if(msgctl(msgid,IPC_RMID,0)==-1)
    {
        perror("msgctl");
        exit(EXIT_FAILURE);
    }
    return 0;
}