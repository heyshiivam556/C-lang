#include<stdio.h>

int main()
{    int phy , chem , maths;
    printf("Enter your phy marks : \n");
    scanf("%d",&phy);
    printf("Enter your chem marks : \n");
    scanf("%d",&chem);
    printf("Enter your maths marks : \n");
    scanf("%d",&maths);
    
    if (phy<33||chem<33||maths<33){
    printf("You are failed in individual subject\n");
    }
    else{
    printf("Your are Passed in individual subject\n");
    }
    if(phy+chem+maths < 120){
    printf("You are failed in your exam");
    }
    else{printf("You are passed in your exam");
    }
    return 0;
}