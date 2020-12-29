
#include <stdio.h>


int main(){

    //initializing the variables
    int p1[] = {3, 5, 2, 7, 4, 10, 1, 9, 8, 6};
    int p8[] = {6, 3, 7, 4, 8, 5, 10, 9};
    char temp[11];
    char secTemp[11];
    char inputKey[11];
    char ext[2];
    inputKey[11] = '\0';
    temp[11]= '\0';
    
    //get the inputKey from user
    printf("Please enter 8 bits of input:");
    scanf("%s", &inputKey); 
    
    printf("your input was: %s\n",inputKey);

    //starting to build k1
    //applying p1
    for(int i=0 ; i<=9; ++i){
        temp[i] = inputKey[p1[i] - 1];
    };
    printf("the input after applying p1: %s\n", temp);
    //left circular shift LS-1

    //Performing LS-1 on first half of temp
    for(int i=0; i<5; i++){
        if( i == 0 ){
            ext[0] = temp[0];
            temp[i]=temp[i+1];
        }else if( i == 4 ){
            temp[i] = temp[i+1];
            temp[i] = ext[0];
        }else{
            temp[i]=temp[i+1];
        }
        
    };
    //Performing LS-1 on second half of temp
    for(int i=5; i<10; i++){
        if(i==5){
            ext[0] = temp[5];
            temp[i]=temp[i+1];
        }else if( i == 9 ){
            temp[i] = temp[i+1];
            temp[i] = ext[0];
        }else{
            temp[i]=temp[i+1];
        }  
    };
    printf("Output after LS-1: ");
    puts(temp);
  



    //8 bit input
    //printf("Please enter 8 bit of a binary inputKey: ")
    //scanf("%i")

};

