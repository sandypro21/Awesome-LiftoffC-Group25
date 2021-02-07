#include<stdio.h>
int main(){
    float celsius, fahrenheit;
 printf("Enter the temperature value in celsius \n");
    scanf("%f",&celsius);
    
    fahrenheit=(celsius*9/5)+32;
 printf("The temperature when converted to fahrenheit is %f \n", fahrenheit);
    return 0;

}