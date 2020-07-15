#include<stdio.h>
int main(void){
  int integer1;
  int integer2;
  int sum;

  printf("Enter the first digit!\n");
  scanf("%d \n", &integer1 );
  printf("Enter the second digit!\n");
  scanf("%d \n", &integer2 );
  sum=integer1+integer2;
  printf("The sum is %d", sum);
}
