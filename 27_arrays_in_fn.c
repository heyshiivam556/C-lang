#include<stdio.h>
        //arrays using pointers//
   void printarray(int*,int);
   void printarray(int* x,int n) {
   printf("%d",x[n]);
   }    
int main()
{
  /*  int marks[] = {12,34,45,56,67,78,89,90,10,25,38};
    int* ptr = &marks[0];
   // printf("%d",*ptr);
    
    for(int i=0;i<11;i++){
    
        printf("marks %d = %d \n",i,*ptr);
        ptr++;
    }*/
            //arrays in function//
        int arr[]={1,2,3,4,5};
        printarray(arr,3); 
        
    
    return 0;
    }