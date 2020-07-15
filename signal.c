#include<stdio.h>
#include <signal.h>
#include <unistd.h>


void handler(){
  printf("I got a signal!");
}

int main(void){
  signal(SIGQUIT, &handler);
  for(;;){
    printf("Is zis infinite?\n");
    sleep(1);
  }
}
