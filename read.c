#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    FILE *fptr;
    fptr = fopen("file1.txt", "r");

    if(fptr != NULL){
        fscanf(fptr, "%d", &num);
        fclose(fptr);
    }else{
        printf("Error opening file");
        exit(1);
    }
    printf("Number read from file is : %d \n", num);
}