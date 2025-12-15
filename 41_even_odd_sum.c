#include<stdio.h>
int main(){
    int n,i;
    printf("enter the number ");
    scanf("%d",&n);
    int evensum=0;
    int oddsum=0;
    for(i=1;i<=n;i++){
        if(i%2==0){
            evensum=evensum+i;
        }
        else{
            oddsum=oddsum+i;
        }
    }
        printf("sum of even number is %d\n",evensum);
        printf("sum of odd number is %d",oddsum);
    return 0;
}