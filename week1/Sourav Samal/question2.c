#include <stdio.h>

int main()
{
    float c, f;

    /* Input temperature in c */
    printf("Enter temperature in celcius: ");
    scanf("%f", &c);

    /* c to f conversion */
    f = (c * 9 / 5) + 32;

    printf("%.2f celcius = %.2f Fahrenheit", c, f);

    return 0;
}