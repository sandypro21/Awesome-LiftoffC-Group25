#include<stdio.h>
 int main()
{
  float r, a, c, d;
 
  printf("\n Please Enter the r : ");
  scanf("%f",&r);
 
  d = 2 * r;
  c = 2 * 3.14 * r;
  a = 3.14 * r * r; 
 
  printf("\n Diameter = %.2f\n", d);
  printf("\n Circumference = %.2f\n", c);
  printf("\n Area = %.2f\n", a);
 
  return 0;
}