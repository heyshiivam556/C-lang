#include<stdio.h>
        //call by reference//
      /*  int sum(int*,int*);
        int sum(int* a,int* b){
        *a =15;
        return *a+*b;
        } 
int main()
{
    int i = 6;
    int j = 10;
    printf("the value of i %d , j %d And sum is %d",i ,j , sum(&i,&j));
    return 0;
} */

        //swap function//
        void swap(int*,int*);
        void swap(int* x ,int* y){
        int temp;
        temp=*x;
        *x = *y;
        *y = temp ;
        
         }
         int main(){
         int x =23;
         int y = 88;
         swap(&x,&y);
         printf("x = %d ,y = %d ",x,y);
         return 0;
         }