#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
  printf("My PID is: %d \n", getpid());
  printf("My PPID is: %d \n", getppid());
}
