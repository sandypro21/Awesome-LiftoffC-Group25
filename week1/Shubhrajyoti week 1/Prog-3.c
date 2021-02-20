/*Program to enter the radius of a circle and find its diameter,circumference and area.*/
/*r=radius; D=diameter; P=perimeter/circumference; A=area;*/

#include<stdio.h>
int main()
{
    int r,D;
    float P,A;
    printf("Enter radius of circle(in cm) :");
    scanf("%d",&r);
    D=r*2;
    P=2*3.14*r;
    A=3.14*r*r;
    printf("\nDiameter of circle = %d cm",D);
    printf("\nCircumference of circle = %f cm",P);
    printf("\nArea of circle = %f cm",A);
    return 0;
}
