/*Program to enter the radius of a circle and find its diameter,circumference and area.*/
/*~Gulshan Kumar Nayak*/
#include<stdio.h>
void main()
{
	float r;
	printf("Enter the radius of the circle:");
	scanf("%f",&r);
	printf("\nDiameter of the circle: %.1f",2*r);
	printf("\nCircumference of the circle is: %.1f",2*3.14*r);
	printf("\nArea of the circle is: %.1f",3.14*r*r);
}
