#include<stdio.h>
#include<string.h>
int main()
{    //encrypt
    char str[] = "kutpaglu";
    for(int i =0 ; i<strlen(str);i++){
    str[i] = str[i]+2;
    }
    printf("%s \n",str);
    //decrypt 
    for(int i =0 ; i<strlen(str);i++){
    str[i] = str[i]-2;
    }
    printf("%s \n",str);   
    
    //no. of occurrence of a character 
    char c = 'n' ;
    int count = 0 ;
    char strA[] = "sunny kumar";
    for(int i =0;i<strlen(strA);i++){
    if(strA[i]==c){
    count++;
    }
    }
    printf("%d",count);
    return 0;
}