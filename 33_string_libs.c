#include<stdio.h>
#include<string.h>

int main()
{
    char *ptr = "lemdi";
    ptr = "another string";  // valid, pointer now points elsewhere
    // using pointers allows to make changes to strings further after defining. //
    printf("%s \n", ptr);

    //standard library functions for strings
    char str[60] =  "there was a lion in a dark jungle.";
    int length = strlen(str);
    printf("the length of string is %d \n",length);

    char stringA[40] ;
    strcpy(stringA,str);
  //  printf("%s",stringA);

    char strC[50] = "Hello";
    char strD[] = " World";
    strcat(strC, strD);
    printf("%s\n", strC);  // Output: Hello World


    char stringB[] =" He was strong and brave.";
    strcat(str,stringB);
    printf("%s\n", str);  //concatenation happens to the 1st string.
    
    int a = strcmp("hello","world");
    printf("%d",a);

    
    return 0;
}