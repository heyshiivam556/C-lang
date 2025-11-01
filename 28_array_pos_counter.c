#include<stdio.h>
                //multi dimensional array s//
/*int main()
{
    int arr[4][3] ={{4,5,6},
                  {6,7,8},
                  {22,45,56},
                  {12,5,6}}; 
   //   printf("%d",arr[3][2]); 
       for(int i =0;i<4;i++){
           for(int j=0;j<3;j++){
           printf("%d ",arr[i][j]);
           }
           printf("\n");
       }
    return 0;
}*/
        // no of positive integers//
       
       int  count(int arr[16],int n){
       int no_of_positive_int=0;
       for(int i = 0 ; i<n; i++ ){
       if(arr[i]>0){
       no_of_positive_int++;
       }
       }
       return no_of_positive_int;
       }
int main(){
    int arr[16] = {5,7,8,5,-4,3,2,-29,83,92,7,-6,5,44,-4,5};
    
    printf("%d",count(arr,16));
    return 0;
}