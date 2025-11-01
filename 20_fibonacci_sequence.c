#include<stdio.h>
//fibonacci sequence 
int fibo(int);
int fibo(int n){
    if(n==1 || n==2){return n-1;}
    return fibo(n-2)+fibo(n-1);
}
int main()
{
    int n ;
    printf("Enter value of n: \n");
    scanf("%d",&n);
    fibo(n);
    printf("%d",fibo(n));
    return 0;
}