#include <stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    printf("enter marks of phy:");
    scanf("%d",&m1);
    printf("enter marks of chem:");
    scanf("%d",&m2);
    printf("enter marks of bio:");
    scanf("%d",&m3);
    printf("enter marks of maths:");
    scanf("%d",&m4);
    printf("enter marks of comp:");
    scanf("%d",&m5);
    int percentage=(m1+m2+m3+m4+m5)/5;
    if(percentage>=90){
        printf("grade A");
    }
    else if(percentage>=80){
        printf("grade B");
    }
    else if(percentage>=70){
    printf("grade C");
    }
    else if(percentage>=60){
    printf("grade D");
    }
    else if(percentage>=40){
    printf("grade E");
    }
    else{
        printf("grade F");
    }

    return 0;
}