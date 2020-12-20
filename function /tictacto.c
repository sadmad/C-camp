#include <stdio.h>
#include <stdbool.h> 

//check if there is the winner and change the boolian charecter to false 
int checkTheWinner(char board[10], bool endGame){

    if       ( board[1] == board[5] && board[1] == board[9] ) {
        endGame = false;
    }else if ( board[3] == board[5] && board[3] == board[7] ) {
        endGame = false;
    }else if ( board[1] == board[4] && board[1] == board[7] ) { 
        endGame = false;
    }else if ( board[2] == board[5] && board[2] == board[8] ) {
        endGame = false;
    }else if ( board[3] == board[6] && board[3] == board[9] ) {
        endGame = false;
    }else if ( board[1] == board[2] && board[2] == board[3] ) {
        endGame = false;
    }else if ( board[4] == board[5] && board[4] == board[6] ) {
        endGame = false;
    }else if ( board[7] == board[8] && board[7] == board[9] ) {
        endGame = false;
    }
    return endGame;
};

//check if the inputs are allowed in the game
bool checkInput(){

    return 0;
};
void updateTheBoard(char board[10]){
    printf("\n     |     |     \n  %c  |  %c  |  %c  \n_____|_____|_____\n     |     |    \n  %c  |  %c  |  %c  \n_____|_____|_____\n     |     |     \n  %c  |  %c  |  %c \n                  \n", board[0], board[1], board[2],board[3], board[4], board[5], board[6], board[7], board[8]);
};

int main(){

    //initializing the board and the boolinan of the while loop
    char board[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    bool endGame = true;
    bool currectInput = true;
    char playerInput;

    //first print of the board
    updateTheBoard(board);

    //players choose their char
    char* p1, p2;
    while(true){
        printf("Which one do you wanna play with X or O: ");
        scanf("%s", &p1);
        printf("\nError");
        if (*p1 == 'X' || *p1 == 'x' ){
            p2 = 'O';
            printf("Your choose X so the second player will play with O");
            break;
        }else if( *p1 == 'o' || *p1 == 'O'){
            p2 = 'X';
            printf("Your choose X so the second player will play with X");
            break;
        }else{
            printf("The input is not valid pleas choose between X or O");
        }
    }

    //initializeing the game
    while(endGame){
        while( currectInput == true ){
            scanf("%char", &playerInput);
            checkInput(playerInput);

        };
        checkTheWinner(board[10], endGame);
        updateTheBoard(board);
    };
    return 0;

};