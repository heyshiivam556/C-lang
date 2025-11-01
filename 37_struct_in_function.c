#include<stdio.h>

        //str in functions//
/*struct employee {
char name[10];
int code;
int salary;};

void show(struct employee e1){
printf(" name : %s \n code : %d \n salary : %d \n hehehe!mkc!",e1.name,e1.code,e1.salary);}

int main()
{
    struct employee e1 = {"shivam",5656,45};
    show(e1);
    return 0;
}*/

        // typedef//
 typedef struct employee {
char name[10];
int code;
int salary;
}emp; 

int main(){
emp e1 = {"shivam",6767,34};
printf("%s %d %d \n", e1.name ,e1.code ,e1.salary);

emp* ptr = &e1;
printf("%s %d %d ",ptr->name,ptr->code,ptr->salary);
}      