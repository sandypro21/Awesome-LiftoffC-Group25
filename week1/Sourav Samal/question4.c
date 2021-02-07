#include <stdio.h>

int main()
{
    int physics, chemistry, biology, maths, computer; 
    float percentage; 

    printf("Enter marks in 5vsubjects respectively: ");
    scanf("%d%d%d%d%d", &physics, &chemistry, &biology, &maths, &computer);


    percentage = (physics + chemistry + biology + maths + computer) / 5;

    printf("percentage = %.2f\n", percentage);


    if(percentage >= 90)
    {
        printf("Grade A");
    }
    else if(percentage >= 80)
    {
        printf("Grade B");
    }
    else if(percentage >= 70)
    {
        printf("Grade C");
    }
    else if(percentage >= 60)
    {
        printf("Grade D");
    }
    else if(percentage >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}