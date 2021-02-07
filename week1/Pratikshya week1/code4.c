#include<stdio.h>
int main(){
    float phy, chem, bio, math, comp, percentage;
 printf("Enter physics mark \n");
      scanf("%f",&phy);
 printf("Enter chemistry mark \n");
      scanf("%f",&chem);
 printf("Enter biology mark \n");
      scanf("%f",&bio);
 printf("Enter mathematics mark \n");
      scanf("%f",&math);
printf("Enter computer mark \n");
      scanf("%f",&comp);
         percentage=( phy+ chem+ bio+ math+ comp) /5;
    printf("Total percentage is %f \n", percentage);
    if(percentage>=90)
    {  
        printf("GRADE A \n");
    }
else if(percentage>=80)
    {  
        printf("GRADE B \n");
    }
 else if(percentage>=70)
    {  
        printf("GRADE C \n");
    }
else if(percentage>=60)
    {  
        printf("GRADE D \n");
    }
else if(percentage>=40)
    {  
        printf("GRADE E \n");
    }
   else if(percentage<40)  
        printf("GRADE F \n");
    return 0;

}