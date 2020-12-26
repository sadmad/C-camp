#include <stdio.h>
#include <stdbool.h> 

//initializing the board and the boolinan of the while loop
char board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
bool game = true;
bool currectInput = true;
char playerInput;
char p1, p2;
int player;
int playagain;
int gamesRound=1;
//check if there is the winner and change the boolian charecter to false 
int checkTheWinner();

//check if the inputs are allowed in the game
bool checkInput();
void updateTheBoard();
char playerCharecterChoice();
void annonceTheWinner();

int main(){
    
    //first print of the board
    printf("\n     |     |     \n  %c  |  %c  |  %c  \n_____|_____|_____\n     |     |    \n  %c  |  %c  |  %c  \n_____|_____|_____\n     |     |     \n  %c  |  %c  |  %c \n                  \n", board[1], board[2], board[3],board[4], board[5], board[6], board[7], board[8], board[9]);



    playerCharecterChoice();
    printf("first player plays with %c and second with %c\n", p1, p2);

    if (game)
        printf("the Game status is On\n");
    player = 1;
    //initializeing the game
    while(game){
        
        currectInput = true;
        if (currectInput)
            printf("the input is still good\n");
        while( currectInput){
            printf("Please choose a empty place on the board: ");
            scanf("%i", &playerInput);
            printf("Player %i choosed %i\n", player, playerInput);
            checkInput(playerInput);

        };
        gamesRound++;
        updateTheBoard(playerInput, player);
       
        if (checkTheWinner() == 1){
            annonceTheWinner();  
            game = false;
            };

        if(player == 1)
            player = 2;
        else
            player = 1;
        printf("you played %i rounds\n", gamesRound);
        if(game == false || gamesRound == 9){
            if(gamesRound == 9)
                printf("No body won this game\n");
            printf("Player %i do you want to play again?\n if yes press 1 otherwise press 2\n", player);
            scanf("%i", &playagain);
            if(playagain == 1){
                for(int i = 1; i<= 9; i++){
                    board[i] = i+'0';
                };
                gamesRound = 1;
                game = true;
            }
        };
    };

    printf("-----------------end----------------");
    return 0;

};


char playerCharecterChoice(){
     //players choose their char
    while(true){
        
        printf("Which one do you wanna play with X or O? (X is 1 and O is 2): ");
        scanf("%i", &player);
        printf("You choosed %i\n", player);
        if (player == 1){
            p1 = 'X';
            p2 = 'O';
            printf("Your choice was X so the second player will play with O\n");
            break;
        }else if( player == 2){
            p1 = 'O';
            p2 = 'X';
            printf("Your choise was O so the second player will play with X\n");
            break;
        }else{
            printf("The input is not valid pleas choose between 1 = X or 2 = O\n");
        }
        return p1, p2;
    }
};

int checkTheWinner(){
    
    printf("starts to check the winner!\n");
    if ( board[1] == board[5] && board[1] == board[9] ) {
        return 1;
    }else if ( board[3] == board[5] && board[3] == board[7] ) {
        return 1;
    }else if ( board[1] == board[4] && board[1] == board[7] ) { 
        return 1;
    }else if ( board[2] == board[5] && board[2] == board[8] ) {
        return 1;
    }else if ( board[3] == board[6] && board[3] == board[9] ) {
        return 1;
    }else if ( board[1] == board[2] && board[2] == board[3] ) {
        return 1;
    }else if ( board[4] == board[5] && board[4] == board[6] ) {
        return 1;
    }else if ( board[7] == board[8] && board[7] == board[9] ) {
        return 1;
    };
    return 0;
};

bool checkInput(int input){
    for(int i = 1; i<=9; i++){
        char str = i + '0';
        if (input == i && board[i] == str){
            currectInput = false;
            return currectInput;
        };
    };
    return currectInput;
};

void updateTheBoard(int playerInput, int player){
    if (player == 1){
        board[playerInput] = p1;
        printf("\n     |     |     \n  %c  |  %c  |  %c  \n_____|_____|_____\n     |     |    \n  %c  |  %c  |  %c  \n_____|_____|_____\n     |     |     \n  %c  |  %c  |  %c \n                  \n", board[1], board[2], board[3],board[4], board[5], board[6], board[7], board[8], board[9]);
    }else{
        board[playerInput] = p2;
        printf("\n     |     |     \n  %c  |  %c  |  %c  \n_____|_____|_____\n     |     |    \n  %c  |  %c  |  %c  \n_____|_____|_____\n     |     |     \n  %c  |  %c  |  %c \n                  \n", board[1], board[2], board[3],board[4], board[5], board[6], board[7], board[8], board[9]);
    };
    
};

void annonceTheWinner(){
    printf("the WINNER!!!\n");
    printf("player %i won the games\n", player);
};