#include <stdio.h>

int main() {
    char name[30];
    printf("Enter your full name:");
    scanf("%s",&name);

    char f_name[30];
    printf("Enter your's father name:");
    scanf("%s",&f_name);

    int agee;
    printf("Enter your age:");
    scanf("%d",&agee);

    printf("Your Name is :            %s \n",name);
    printf("Your Father's name is :  %s \n",f_name);
    printf("Your Age is :             %d \n",agee);
    
    return 0;
}