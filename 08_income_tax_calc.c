#include<stdio.h>

int main()
{    float income; float tax ;
    printf("Enter your income in lakhs: \n");
    scanf("%f",&income);
    printf("income is %.2f\n",income*100000);
    
    if (income >=2.5 && income<5.0){
    tax = (income-2.5)*0.05;
    printf("works1\n");}
    else if (income >=5.0 && income<10.0){
    tax = (income-5.0)*0.2 + 2.5*0.05 ;
    printf("works2\n");}
    else if (income >10.0){
    tax = (income-10.0)*0.3 + 5.0*0.2 + 2.5*0.05 ;
    printf("works\n");}
    else{ 
     printf("didn't work\n");
    }
    printf("You have to pay tax amount: ₹%.2f",tax*100000);
    return 0;
}