#include<stdio.h>

int main()
{    
int year;
printf(" choose the year: \n");
scanf("%d",&year);
printf(" You choosed the year: %d \n",year);
if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
    printf("The year %d is a LEAP year\n", year);
} else {
    printf("The year %d is NOT a leap year\n", year);
}
    return 0;
}