/*Program to enter two numbers and perform all arithmetic operations*/

#include<stdio.h>
int main()
{
	getch();
    int a,b;
    int  SUM,DIFF,MUL,DIV,MOD;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    SUM=a+b;
    DIFF=a-b;
    MUL=a*b;
    DIV=a/b;
    MOD=a%b;
    printf("\nSum of no.s= %d",SUM);
    printf("\nDifference of no.s = %d",DIFF);
    printf("\nProduct of no.s = %d",MUL);
    printf("\nDivision Quotient = %d",DIV);
    printf("\nRemainder of no.s = %d",MOD);
    return 0;
}






