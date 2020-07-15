/*
malloc() - memory
calloc() - contiguous
free()   - deallocation
realloc()- reallocation
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int* ptr;
    int num;

    printf("Enter the amount of memory u want to allocate! \n");
    scanf("%d", &num);
    printf("You have malloced for %d elements...\n", num);
    ptr = (int*)malloc(num*sizeof(int));

    if (ptr == NULL){
        printf("Memory space unallocated!");
        exit(1);
    }else{
        printf("Memory space allocated via malloc() \nEnter the numbers you want in the space...\n");

    }

    for(int i=0; i< num; i++){
        scanf("%d", &ptr[i]);
    }
    printf("elements put in space successfull!\n");

    for(int i=0; i< num; i++){
        printf("Element %d = %d \n", i,ptr[i]);
    }
}