/*Program to input marks of five subjects Physics, Chemistry, Biology,
Mathematics and Computer. Calculate percentage and grade*/
/*~Gulshan Kumar Nayak*/
#include<stdio.h>
void main()
{
	float a,b,c,d,e,per;
	char grade;
	printf("Enter marks in Physics: ");
	scanf("%f",&a);
	printf("Enter marks in Chemistry: ");
	scanf("%f",&b);
	printf("Enter marks in Biology: ");
	scanf("%f",&c);
	printf("Enter marks in Mathematics: ");
	scanf("%f",&d);
	printf("Enter marks in Computer: ");
	scanf("%f",&e);
	per=((a+b+c+d+e)/500)*100.0;
	if(per>=90)
	grade='A';
	else if(per>=80)
	grade='B';
	else if(per>=70)
	grade='C';
	else if(per>=60)
	grade='D';
	else if(per>=40)
	grade='E';
	else
	grade='F';
	printf("\nPercentage= %.2f%%",per);
	printf("\nGrade is= %c",grade);
	
}
