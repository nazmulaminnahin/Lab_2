/*Any integer is input through the keyboard. Write a program to find out whether itis an odd number or even number.*/
#include<stdio.h>
 int main()
 {
 int number1;

  printf("Enter the number = ");
  scanf("%d",&number1);

  if (number1 % 2==0)
  {
    printf("Even number");
  }
  else
  {
    printf("Odd number");
  }
  return 0;
 }
