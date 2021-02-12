#include <stdio.h>

int main()
{
    int x, y;
    int add, subtract, multiply;
    float divide;

    printf("Enter any two numbers::\n");
    scanf("%d%d", &x, &y, "\n");

    add = x + y;
    subtract = x - y;
    multiply = x * y;
    divide = (float)x / y;

    printf("\n");
    printf("addition   %d + %d = %d\n", x, y, add);
    printf("difference %d - %d = %d\n", x, y, subtract);
    printf("product    %d * %d = %d\n", x, y, multiply);
    printf("quotient   %d / %d = %f\n", x, y, divide);

    return 0;
}