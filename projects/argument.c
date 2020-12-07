#include<stdio.h>

int main(int argc, char *argv[]){

    int numberOfArguement = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of Arguments: %d", numberOfArguement);
    printf("\nArgument 1 is the program name: %s", argument1);
    printf("\nArgument 2 is the command line argument: %s", argument2);


}