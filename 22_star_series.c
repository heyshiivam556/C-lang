#include<stdio.h>

//sum of n terms recursive//
/*int sum(int);
int sum(int a) {
   if(a==0){return a;}
    return sum(a-1)+a ;
}

int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("the sum upto %d is %d ",a,sum(a));
    return 0;
}*/

int main(){
    int n = 10 ;
    for(int i =0; i<n;i++){
    
    for(int j=0 ;j<2*i+1;j++){
    printf("* ");
    }
    printf("\n");
    }
}