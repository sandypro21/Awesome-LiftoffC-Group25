/*Program to enter temperature in Celsius and convert it into Fahrenheit*/

#include<stdio.h>
int main()
{
    getch();
    float C,F;
    printf("Enter temperature in Celsius: ");
    scanf("%f",&C);
    F=(9*C)/5+32;
    printf("\nTemperature in Fahrenheit = %f",F);
    return 0;
}








