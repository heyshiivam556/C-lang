#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("sample.txt","r");
    int num ;
    fscanf(ptr,"%d",&num);
    printf("the number : %d \n",num);
    return 0;
}