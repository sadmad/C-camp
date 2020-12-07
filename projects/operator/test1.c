#include <stdio.h>

int main(){
    unsigned int a = 60; //0011 1100
    unsigned int b = 13; //0000 1101
    int result = 0;

    result = a & b; // 0000 1100
    printf("THe result of a & b is: %d\n", result);
    result = a | b; // 0011 1101
    printf("THe result of a or b is: %d\n", result);
    result = a ^ b; // 0011 0001
    printf("THe result of xor & b is: %d\n", result);
    result = ~(a); // 0011 0001
    printf("THe result of shit to left is: %d\n", result);
    result = a << 2; // 1111 0000
    printf("THe result of shidt to right is: %d", result);

    return 0;
}