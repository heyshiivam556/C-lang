#include<stdio.h>

int main(){
            //strings - the longer way //
    char str[] = {'s','h','i','v','a','m','\0'};
    for(int i = 0 ; i<6 ; i++){
    printf("%c",str[i]);
    }
    printf("\n");
          //strings - the shorter  way //
    char stringA[] = "shivam is the king ";
    printf("%s",stringA);
    printf("\n");
    
        //strings -  scanf syntax //
     /*   char stringB[40] ;
        scanf("%s",stringB);        // no '&' sign is used// 
        printf("%s",stringB);
        
        // gets() - not a multi-word string and puts() - a multi-word string 
       */ 
        char stringC[30];
        gets(stringC); // gives an option for input 
        printf("%s",stringC);   //input - shivam kumar,, output - shivam kumarhey
        printf("hey");       
        //use 'fgets()' insted of gets() but it has different syntax 
        
        
      /*  char stringD[30] ;
        puts(stringD); // doesn't give an option for input 
        //printf("%s",stringD);   //input - shivam kumar,, output - shivam kumar hey(hey in next line)
        printf("hey"); */
    return 0;
}    