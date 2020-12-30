
#include <stdio.h>


int main(){

    //initializing the variables
    int p8[] = {6, 3, 7, 4, 8, 5, 10, 9};
    int p1[] = {3, 5, 2, 7, 4, 10, 1, 9, 8, 6};
    int n = 0;
    int i;
    char temp[11];
    //char secTemp[11];
    char inputKey[11];
    char ext[2];
    char k2[9];
    char k1[9];
    temp[10]='\0';
    k1[8] = '\0';
    
    
    
    
    
    //get the inputKey from user
    printf("Please enter 10 bits of input:");
    scanf("%s", &inputKey); 
    inputKey[10] = '\0';
    printf("input: %s\n",inputKey);

    //starting to build k1
    //applying p1
    for(i=0 ; i<=9; ++i){
        temp[i] = inputKey[p1[i] - 1];
    };
    temp[10] = '\0';
    //strncpy(secTemp, temp, 11);
    //secTemp[10] = '\0';
    printf("P1: %s\n", temp);
    printf("len: %i\n",  strlen(temp));
    //LS-1
    //first half
    for(i=0; i<5; ++i){

        if( i == 0 ){
            ext[0] = temp[0];
            temp[i]=temp[i+1];
        }else if( i == 4 ){
            temp[i] = ext[0];
        }else{
            temp[i]=temp[i+1];
        }
        
    };
    //second half
    for(i=5; i<10; ++i){

        if(i==5){
            ext[0] = temp[5];
            temp[i]=temp[i+1];
        }else if( i == 9 ){
            temp[i] = ext[0];
        }else{
            temp[i]=temp[i+1];
        }  

    };

    printf("LS-1: ");
    puts(temp);

    printf("P8: ");
    for (i = 0; i<8;++i) {
        if(i==7)
            printf("%d\n",p8[i]);
        else
            printf("%d", p8[i]);
    };


    for (i=0; i<8; i++) {
        n = p8[i];
        k1[i] = temp[n-1];
    };

    printf("k1: ");
    puts(k1);

    //for (i = 0; i<8; ++i) {
    //    n = p8[0];
    //    k1[i] = temp[n - 1];
    //};
    //printf("The k1 result: ");

    //Performing LS2
    for(i=0; i<5; ++i){

        if( i == 0 ){
            ext[0] = temp[0];
            temp[i]=temp[i+2];
        }else if( i == 1 ){
            ext[1] = temp[i];
            temp[i]=temp[i+2];
        }else if( i == 3 ){
            temp[i] = ext[0];
        }else if( i == 4 ){
            temp[i] = ext[1];
        }else{
            temp[i]=temp[i+2];
        }
        
    };
    //second half
    for(i=5; i<10; ++i){

        if(i==5){
            ext[0] = temp[5];
            temp[i]=temp[i+2];
        }else if( i == 6 ){
            ext[1] = temp[6];
            temp[i]=temp[i+2];
        }else if( i == 8 ){
            temp[i] = ext[0];
        
        }else if( i == 9 ){
            temp[i] = ext[1];
        }else{
            temp[i]=temp[i+2];
        }  

    };
    
   

    printf("LS-2: %s\n", temp);
    printf("len: %i\n",  strlen(temp));
    
    for (i=0; i<8; ++i) {
        n = p8[i];
        k2[i] = temp[n-1];  
    };
    k2[8] = '\0';
    printf("k2: ");
    puts(k2);
    //8 bit input
    //printf("Please enter 8 bit of a binary inputKey: ")
    //scanf("%i")

};

