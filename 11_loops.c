#include<stdio.h>

int main(){ 

            // WHILE loop
   /* int a = 0 ;
     while(a<=20){
     if (a>=10){
     printf("the value of a is %d \n",a);
     }
     a++; } */
     
            // DO - WHILE loop
       /*  int i = 1 ; 
         int n ;
         printf("Enter a value : ");   
         scanf("%d",&n);
         
         do{
            printf("%d\n",i);
            i++;
         } while(i <=n); */
         
               // FOR loop
          
          int n;
          printf("Enter a value : ");   
         scanf("%d",&n);
         
         for(int i=n; i ; i--){
         if(i==5){
         //break;
         //continue;
         }
         printf("%d\n",i);
         }
               
     return 0; 
}