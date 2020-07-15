#include<stdio.h>
int main(void){
  int grade;
  puts("Enter grade of student");
  scanf("%d", &grade);

  if(grade >= 90 ){
    puts("Grade is A+");
  }else if(grade >= 85){
    puts("Grade is A");
  }else if(grade >=80){
    puts("Grade is A-");
  }else if(grade >= 75){
    puts("Grade is B+");
  }else if(grade >= 70){
    puts("Grade is B");
  }else if(grade >= 65){
    puts("Grade is B-");
  }else{
    puts("You shoud just quit school");
  }
}
