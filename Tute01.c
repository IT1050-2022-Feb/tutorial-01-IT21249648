/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,mark2,sum = 0;
  float avg;
  
  printf("enter mark1: ");
  scanf("%d",&mark1);
  
  printf("enter mark2: ");
  scanf("%d",&mark2);
  
   sum = mark1 + mark2;
   avg = sum / 2;
  
  printf("average is %.2f", avg);
   
  
  return 0;
}

