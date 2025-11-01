#include<stdio.h>

int main()
{    
char ch ;
printf("Enter you letter : \n");
scanf("%c",&ch);
printf("%d\n",ch);
if(ch>=65 && ch<=90){
    printf("The letter is UPPERCASE ; VALUE: %d",ch);
}
else if(ch>=97 && ch<=122){
printf("The letter is LOWERCASE ; VALUE: %d",ch);
}
    return 0;
}