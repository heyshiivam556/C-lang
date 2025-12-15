#include <stdio.h>

int factorial(int n){
    int fact = 1;
    while (n>1){
        fact = fact*n;
        n--;
    }

    return fact;
}
int exponential(int x,int n){
    int expo = 1;
    while (n>0){
        expo = expo *x;
        n--;
    }
    return expo;
}
int main(){
    int n , x ;
    printf("To calculate the expansion of e^x , Define the values of 'x' & 'n' : \n");
    printf("value of x : ");
    scanf("%d",&x);
    printf("no. of terms(n) : ");
    scanf("%d",&n);

    float answer = 0;
    //for loop iterates n times
    for (int i = 0; i < n; i++){
      // printf("factorial of %d is %d \n",i, factorial(i));
        answer += ((float)1/factorial(i))*exponential(x,i);
    }
    printf("%f",answer);
    

}