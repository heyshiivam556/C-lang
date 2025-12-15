#include<stdio.h>
     float avg(int,int,int);
     float avg(int l ,int m , int n){
     return (l+m+n)/3.0 ;
      }
int main()
{
    int a , b, c ;
    printf("Enter the numbers (three) :");
    scanf("%d %d %d", &a,&b ,&c);
    printf("you entered : %d %d %d \n ",a,b,c);
    avg(a,b,c);
    printf("the avg is : %.2f \n", avg(a,b,c));
    return 0;
}