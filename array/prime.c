#include<stdio.h>

int main () {

    int num[100];
    int prime[50]= {2,3,5};
    int index2 = 3;
    for ( int i = 0; i < 101; i++)
        num[i] = i;
    
    
    for ( int index = 6; index < 101; index++ ){

        if ( num[index] % 2 != 0){
            if ( num[index] % 3 != 0){
                if (num[index] % 5 != 0){
                    prime[index2] = num[index];
                    index2++;
                    printf("%i\n", num[index]);
                }
            }
        }
    }
    printf("Size of int array:%d \n",sizeof(num)/sizeof(num[0]));
    printf("Size of int array:%d \n",sizeof(prime)/sizeof(prime[0]));
    for(int count = 0; count <50; count++){
        if(prime[count] != 0)
            printf("%i\n", prime[count]);
    }
    return 0;  
}