/*Program to check whether an alphabet is vowel or consonant using
switch case.*/
/*~Gulshan Kumar Nayak*/
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the Alphabet you want to check: ");
	scanf("%c",&ch);
	switch(ch)
	{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
		printf("It is a vowel");
		break;
	default:
		printf("It is a Consonant");
	}
}
