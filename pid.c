#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int proc_id;
    int par_proc_id;

    proc_id= getpid();
    par_proc_id = getppid();

    printf("%d \n", proc_id);
}