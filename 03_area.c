#include <stdio.h>

int main(){
    int length , breadth;
    printf("Enter length: ");
    scanf("%d",&length);
    printf("Enter breadth: ");
    scanf("%d",&breadth);

    int area = length*breadth;
    printf("\nthe length is : %d\n",length);
    printf("the breadth is : %d\n",breadth);
    printf("the AREA is : %d\n",area);
     return 0;

}