#include<stdio.h>
                 
                 //Passing a value to the function
                 
/* int sum(int , int );      //function prototype 

int sum(int x ,int y){                              //function definition 
    printf("the sum of %d & %d is %d",x,y,x+y);
    return x+y;
} 
int main() {
    int a = 10;
    int b = 13;
    sum(a,b); 
    
   // sum(15,36);
    
        return 0;
} */
                //greetings//
  
   void goodMorning ();
   void goodEvening();
   void goodNight ()  ;
   
   void  goodMorning(){
   printf("hey! good morning 🌞\n");
    }
    void  goodEvening(){
   printf("hey! good evening 🌃\n");
    }
    void  goodNight(){
   printf("hey! good night  🌉\n");
    }               
    
    int main(){
    goodMorning();
    goodEvening();
    goodNight();
    }    