/*
fwirt(address_data, size_of _data, numbers_data, pointer to file);
*/

#include <stdio.h>
#include <stdlib.h>

struct threeNum{
    int num1,  num2, num3;
}three;

int main(){

FILE *fptr;

fptr = fopen("Prostu.bin", "wb");
if(fptr == NULL){
    printf("Error opening file....");
    exit(1);
}
printf("Enter the numbers u want written to file\n");
for(int i=0;i <3; i++){
    //scanf("%d\n",&);
    three.num1 = i;
    three.num2 = i*2;
    three.num3 = i*3;
    fwrite(&i ,sizeof(struct threeNum),1 , fptr);
}
printf("writting successfull\n");
fclose(fptr);
printf("File closed successfully.\n");
}
