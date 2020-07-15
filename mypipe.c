#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>

int main(){
  pid_t p = fork();
  if (p == 0){
    //child block
    for(int i = 0; i <= 10; i++){
      printf("I = %d\n ", i);
    }
  }else if(p > 0){
    //parent block
    wait(NULL);
  }else{
    perror("Forking failed!");
  }
}
