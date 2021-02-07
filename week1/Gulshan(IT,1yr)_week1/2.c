/*Program to enter temperature in Celsius and convert it into Fahrenheit.*/
/*~Gulshan Kumar Nayak*/
#include<stdio.h>
void main()
{
	float a;
	printf("Enter the Temp in Celsius: ");
	scanf("%f",&a);
	printf("The equivalent Temp in Farenhit is: %.1f",1.8*a+32);
}
