#include<stdio.h>
int main(void){
  int numberOfStudents;
  int average;
  int counter;
  int total =0;
  int inloop;

  printf("%s", "Enter the number of students in class.\n");
  scanf("%d", &numberOfStudents);
  inloop = numberOfStudents;

  while(inloop > 0){
    printf("Enter student mark!\n");
    scanf("%d", &counter);
    total += counter;
    inloop--;
  }

  average = total / numberOfStudents;
  printf("The average of the class is %d", average);

}
