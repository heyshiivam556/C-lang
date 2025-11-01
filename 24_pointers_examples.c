#include<stdio.h>
/*   int tenx(int*);
   int tenx(int* x){
    return 10*(*x);
   }
int main()
{
   int x ;
   printf("eneter a number :\n");
   scanf("%d",&x);
   printf("the 10x value of %d is %d",x,tenx(&x));
   return 0;
} */
        //sum and avg using pointers//
float avg(int*,int*);
float avg(int* x,int* y){
  int jodo = *x+*y;
    return (jodo)/2.0;
}
int sum(int*, int*);
int sum(int* x,int* y ){
    return (*x+*y);
}

int main() {
    int x = 56;
    int y = 44;
    printf("the sum is %d \n and the avg is %f ",sum(&x,&y),avg(&x,&y));
    return 0;
}