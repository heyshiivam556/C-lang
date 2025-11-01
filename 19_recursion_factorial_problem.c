#include<stdio.h>
// recursions
int nfactorial(int);
int nfactorial(int a){
    if( a==1 || a==0){return 1;} // baae condition 
  int  facto = nfactorial(a-1)*a;
    return facto;
}
int main()
{
    int n ;
    printf("Enter a number :\n");
    scanf("%d",&n);
   int factorial = nfactorial(n);
    printf("the factorial of %d is %d",n,factorial);
    return 0;
}