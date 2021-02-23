#include<stdio.h>
int main(){
    int num1, num2, sum, sub, mult, mod;
    float div;

  printf("Enter number1 \n");
       scanf("%d",&num1);
  printf("Enter number2 \n");
        scanf("%d",&num2);

     sum=num1+num2;
      printf("Summation value is %d \n", sum);

     sub=num1-num2;
      printf("Subtraction value is %d \n", sub);

     mult=num1*num2;
      printf("Multiplication value is %d \n", mult);

     div=(float)num1/num2;
      printf("Division value is %f \n", div);

     mod=num1%num2;
      printf("Modulus value is %d \n", mod);

      return 0;

}