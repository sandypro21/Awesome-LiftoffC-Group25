#include<stdio.h>
int main(){
    float radius, diameter, circumference, area;
    float pi=3.14;   
printf("Enter the value of the radius \n");
  scanf("%f",&radius);

  diameter=2*radius;
printf("Diameter of the circle is %f \n", diameter);
   circumference=2*pi*radius;
printf("Circumference of the circle is %f \n", circumference);
   area=pi*radius*radius;
printf("Area of the circle is %f \n", area);

 return 0;
}