#include<stdio.h>

int main()
{
// Q.1) left shift 
    int num;
    printf("enter a num : ");
    scanf("%d",&num);
    num = num<<1;
    printf(" result : %d",num);
    
    //Q.2) right shift
    int num2;
    printf("enter a num : ");
    scanf("%d",&num2);
    num2 = num2>>1;
    printf(" result : %d",num2);
    
    //Q.3) good or better number
        int a;
        printf("enter a num : ");
        scanf("%d",&a);
        if(a%3==0 ||a%5==0||a%7==0 ){
        printf("Good Number \n");
        }else{
        printf("Better Number \n");
        }
        
        //Q.4) add or subtract on eqaultiyand inequality 
        int b,c;
        printf("Enter b and c : ");
        scanf("%d %d",&b,&c);
        if(b==c){
         printf("result : %d \n",b+c);
        }else{
        printf("result : %d \n",b-c);
        }
    return 0;
    
}