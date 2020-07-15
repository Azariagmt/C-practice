#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fptr;
    char num;
    printf("Enter number u want written in file....");
    scanf("%c", &num);
    fptr = fopen("randy.txt", "w");
    if (fptr == NULL){
        printf("Error bish");
        exit(1);
    }

    fprintf(fptr, "%c", num); 
    printf("Number written to file successfully...");
    fclose(fptr);
    printf("File successfully closed....");
}