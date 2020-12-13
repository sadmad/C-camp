#include <stdio.h>
#include <stdlib.h>

int main (){
    srand(time(NULL));
    int randomNumber = rand() % 20;
    
    int count = 5;
    while(count > 0){
        unsigned int guessedNum = 0;

        printf("Enter a guess: ");
        scanf("%u", &guessedNum);

        if (guessedNum == randomNumber){

            printf("Congradulation you won the game!");
            break;

        }else{

            if (guessedNum < randomNumber){  
                printf("Sorry, %i is wring. Mynumber is more than that\n", guessedNum);
            }else{
                printf("Sorry, %i is wring. Mynumber is less than that\n", guessedNum);
            }

        }
        --count;
        printf("Your have %i tr%s left.\n", count, count == 1 ? "y" : "ies");
    }
    printf("My number was: %i\n", randomNumber);
  
}