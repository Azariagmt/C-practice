#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    FILE *fptr;
    int num;

    printf("Opening file\n");
    fptr = fopen("stigma.txt", "w");

    if (fptr == NULL){
        printf("Error pemimg file\n");
        exit(0);
    }

    printf("Enter number you want written in file \n");
    scanf("%d", &num);
    fprintf(fptr, num);
    printf("File successfully written!");
    close(fptr);
    printf("File closed");

    

}