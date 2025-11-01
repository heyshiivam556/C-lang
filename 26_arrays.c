#include<stdio.h>
        //arrays//
int main()
{
    /*int marks[20];
    marks[0]=12;
    marks[1]=45;
    marks[2]=67;
    printf("marks is %d, %d,%d",marks[0],marks[1],marks[2]);*/
    
    int marks[5];
    for(int i=0;i<5;i++){
    printf("enter marks : ");
    scanf("%d",&marks[i]);
    }
    for(int i =0;i<5;i++){
    printf("the marks is %d \n", marks[i]);
    }
    return 0;
}