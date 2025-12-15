#include <stdio.h>
/* - - - - 1
   - - - 2 3
   - - 3 4 5
   - 4 5 6 7
   5 6 7 8 9*/
int main(){
int num = 1;

for (int i = 1; i <= 5; i++){
 num = i;
    for (int j = 0; j < 5-i; j++){
        printf("- ");
    }
    for (int k = 0; k < i; k++){
        printf("%d ",num);
        num++;
    }
    printf("\n");
}
return 0;
}