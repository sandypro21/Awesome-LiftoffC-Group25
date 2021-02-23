/*Program to check whether an alphabet is vowel or consonant using switch case.*/

#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter an alphabet : ");
    scanf("%c",&alphabet);
    switch(alphabet)
    {
        case'A':printf("\nIt is a vowel.");
                break;
        case'E':printf("\nIt is a vowel.");
                break;
        case'I':printf("\nIt is a vowel.");
                break;
        case'O':printf("\nIt is a vowel.");
                break;
        case'U':printf("\nIt is a vowel.");
                break;
        case'a':printf("\nIt is a vowel.");
                break;
        case'e':printf("\nIt is a vowel.");
                break;
        case'i':printf("\nIt is a vowel.");
                break;
        case'o':printf("\nIt is a vowel.");
                break;
        case'u':printf("\nIt is a vowel.");
                break;
        default:printf("\nIt is a consonant.");
    }
    return 0;
}
