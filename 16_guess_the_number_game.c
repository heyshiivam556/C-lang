#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(0));
    int randomNo = (rand()%100)+1;

    int guessed_no ;


    for(int no_of_guesses = 0; guessed_no != randomNo ; no_of_guesses++) {
        printf("Guess the number(1-100) : \n");
        scanf("%d",&guessed_no);

        if(guessed_no > randomNo) {
            printf("Choose a lower number! \n");

        }
        else if(guessed_no < randomNo) {
            printf("Choose a Higher number! \n");
        }
        else {
            no_of_guesses++;
            printf("CONGRATULATIONS! You guessed the Number in %d guesses \n",no_of_guesses);
        }
    }
    return 0;
}