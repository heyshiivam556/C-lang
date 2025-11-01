#include<stdio.h>

int main(){
            //sum of multiplication//
    /*int sum =0;
    int n;
    printf("sum of table for n = ");
    scanf("%d",&n);
    for(int i =1; i<11 ; i++){
    sum = sum +(i*n);
    }
    printf("%d",sum);*/
    
                //factorial//
    int factorial =1;
    int n;
    printf("Factorial of = ");
    scanf("%d",&n);
    
    for(int i=n ; i ; i--){
    factorial *=i;
    }
    printf("the factorial of %d is : %d",n ,factorial);
    return 0;
}