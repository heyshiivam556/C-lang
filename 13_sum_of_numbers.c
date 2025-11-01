#include<stdio.h>

int main(){
                //*while loop*//
        /*int sum=0;
        int i =0;
         int n;
          printf("Enter a value : ");   
         scanf("%d",&n);
         while(i<=n){
         sum += i ;
         i++;
         }
         printf("the sum of natural numbers upto %d is %d",n,sum);
               */
               
               //*for loop*//
         /*int sum=0;
        
         int n;
          printf("Enter a value : ");   
         scanf("%d",&n);
         for(int i =0;i<=n; i++){
         sum += i ;
         
         }
         printf("the sum of natural numbers upto %d is %d",n,sum);
               */
                   //*do-while loop*//
         int sum=0;
        int i =0;
         int n;
          printf("Enter a value : ");   
         scanf("%d",&n);
         do{
         sum += i;
         i++;
         }while(i<=n);
         printf("the sum of natural numbers upto %d is %d",n,sum);
     return 0; 
}