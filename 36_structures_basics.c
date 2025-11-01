#include<stdio.h>

struct employee {
char name[20] ;
int id ;
float salary;
};

int main()
{       //basics//
 /*   struct employee aa,bb,cc;
    strcpy(aa.name,"shiivam");
    aa.id = 2025;
    aa.salary = 3.4;
    
    printf("%s %d %.2f",aa.name,aa.id,aa.salary);
    */
        //get data from users //
        
        struct employee a[3]; 
      for(int i =1 ; i<4 ; i++){
        printf("enter name of employee %d : ",i);
        scanf("%s",a[i].name);
        printf("enter id : ");
        scanf("%d",&a[i].id);
        printf("enter salary : ");
        scanf("%f",&a[i].salary);
        }
        for(int i = 1;i<4;i++){
        printf("employee %d : %s \n id : %d \n salary : %.1f \n",i,a[i].name,a[i].id,a[i].salary);
        }
    return 0;
}



/*
#include <stdio.h>

struct employee {
    char name[20];
    int id;
    float salary;
};

int main() {
    struct employee a[3]; // Array of 3 employees

    for(int i = 0; i < 3; i++) {
        printf("Enter name for employee %d: ", i + 1);
        scanf("%s", a[i].name);  // No need for '&' when reading strings (arrays)
    }

    // Optional: print entered names
    for(int i = 0; i < 3; i++) {
        printf("Employee %d name: %s\n", i + 1, a[i].name);
    }

    return 0;
}*/