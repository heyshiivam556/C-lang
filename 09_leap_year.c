#include<stdio.h>

int main()
{    
int year;
printf(" choose the year: \n");
scanf("%d",&year);
printf(" You choosed the year: %d \n",year);
if(year%4==0 || year%100==0 && year%400==0){
printf("the year %d is a LEAP year",year);
}
else{printf("%d is NOT a leap year",year);}
    return 0;
}