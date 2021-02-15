/*Program to enter two numbers and perform all arithmetic operations.*/
/*~Gulshan Kumar Nayak*/
#include<stdio.h>
void main()
{
	float a,b;
	printf("Enter 2 numbers: ");
	scanf("%f%f",&a,&b);
	printf("Basic Arithmetic operations:");
	printf("\n%.1f+%.1f is=%.1f",a,b,a+b);
	printf("\n%.1f-%.1f is=%.1f",a,b,a-b);
	printf("\n%.1f*%.1f is=%.1f",a,b,a*b);
	printf("\n%.1f/%.1f is=%.1f",a,b,a/b);
	
}
