#include<stdio.h>

int main() {
    int n;
    int prime = 1 ;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n==0 || n==1) {
        prime = 0 ;}
    else {
        for(int i = 2; i<n ; i++) {
            if(n%i==0 && n!=2) {
                prime = 0;
                break;
            }
        }
    }
    if(prime){
    printf("%d is a prime",n);}
    else{
    printf("%d is not a prime",n);}
        return 0;
}