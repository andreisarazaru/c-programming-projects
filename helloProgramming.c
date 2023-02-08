#include<stdio.h>
#include<stdlib.h>

int main ()

{
  system("cls");
  int num1, num2, sum;
  
  printf("Enter first number: \n");
  scanf("%d", &num1);

  printf("Enter second number: \n");
  scanf("%d", &num2);

  printf("The first number is %d\n", num1);
  printf("The second number is %d\n", num2);


  sum = num1 + num2;
  printf("The sum is %d", sum);





  return 0;
}


