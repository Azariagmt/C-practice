#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
  uid_t ruid, euid, suid;
  gid_t rgid, egid, sgid;
  printf("My PID is : %d \n", getpid());
  printf("My PPID is : %d \n", getppid());
  printf("RESUID: %d \n",getresuid(&ruid, &euid, &suid));
  printf("RESGID: %d \n",getresgid(&rgid, &egid, &sgid));

}
