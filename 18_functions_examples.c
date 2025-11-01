#include<stdio.h>
/*
int change(int a);

int change(int a){                //only a copy of b will come here i.e 12
        a=67;                     // it will be 12=67; 
        return 0;
}
int main()
{
    int b =12;
    change(b);         //the value still remains b =12
    printf("b is %d is ",b);
    return 0;
} */

                    //Area of square //
  #include<math.h>
                   
  int area(int)  ;
  
  int area(a){
   printf("the area of sq. for side length %d is %lf",a,pow(a,2));
  }               
  int main(){
      int b = 12;
      area(b);
  }