#include<stdio.h>
        //pointers//
int main()
{
    int i =6;
    int* j = &i;
    int** k = &j;
   /* printf("%p \n",j);
    printf("%p \n",&i);
    printf("%u \n",j); */ //will get different addresses on every run//
    
  /* printf("the value on address %p is %d \n",j,*j);
   printf("the value on address %p is %d\n",j,*&i);
   printf("the  address %p = %p\n",j,*&j); */
   
   printf("the value on address %p is %d \n",k,**k);
   printf("the value on address %p is %d\n",k,**&j);
   
   printf("the add j %p is saved in add k %p" , j,k);
    
    
    return 0;
}