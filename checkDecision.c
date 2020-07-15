#include<stdio.h>

int main(void){
  int integer1, integer2;
  printf("Enter the two numbers to view the relationship\n");
  scanf("%d%d", &integer1, &integer2);

  if(integer1 == integer2){
    printf("The two numbers are equal");
  }

  if(integer1 > integer2){
    printf("The first number is bigger");
  }

  if(integer2 > integer1){
    printf("The second number is bigger");
  }
  
}
