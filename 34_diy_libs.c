#include<stdio.h>


int main()
{
char stringA[] = "mynameissunnyguhkumar";
int m,n ;
scanf("%d" ,&m);
scanf("%d" ,&n);
for(;m<n;m++){
printf("%c",stringA[m]);
}
printf("\n");
printf("%s",stringA);
printf("\n");


//strlen 
char str[] = "this is a string and what else";
int count = 0;
    for(; str[count]!='\0';count++){
    
    }
   printf("%d",count); 
}
  //  fflush(stdin);    //to not register the enter