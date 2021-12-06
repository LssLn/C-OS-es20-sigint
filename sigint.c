#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

void f (int sig){
    printf("ricevuto segnale n %d",sig);
    sleep(1);
    //signal(SIGINT,f); //REIMPOSTO L'HANDLER
    signal(SIGINT,SIG_DFL); //REIMPOSTO A DEFAULT
}

int main(){
    printf("egv");
    signal(SIGINT,f); //sigint = CTRL/C
    printf("vf");
    while(1){
    printf("Hi");
    sleep(1);
    }
}
