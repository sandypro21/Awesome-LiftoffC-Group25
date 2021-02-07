/*Program to input marks of five subjects and calculate percentage and grade accordingly:*/
/*%age>=90%  : grade A*/
/*%age>=80%  : grade B*/
/*%age>=70%  : grade C*/
/*%age>=60%  : grade D*/
/*%age>=40%  : grade E*/
/*%age<40%   : grade F*/

#include<stdio.h>
int main()
{
    float phy,chem,bio,math,cs,sum,percentage;
    char grade;
    printf("Enter marks of Physics,Chemistry,Biology,Mathematics and Computer Science : ");
    scanf("%f %f %f %f %f",&phy,&chem,&bio,&math,&cs);
    sum=phy+chem+bio+math+cs;
    percentage=(sum*100)/500;
    printf("\nPercentage of marks = %f",percentage);
    if(percentage>=90)
        grade='A';
    else if(percentage>=80)
             grade='B';
    else if(percentage>=70)
             grade='C';
    else if(percentage>=60)
             grade='D';
    else if(percentage>=40)
             grade='E';
    else
         grade='F';
    printf("\nGrade of student : %c",grade);
    return 0;
}
