#include <stdio.h>

int main() {
    printf("%d bytes is size of int\n",sizeof(int));
    printf("%d bytes is size of double\n",sizeof(double));
    printf("%d bytes it the size of float",sizeof(float));
    printf("%d bytes it the size of char",sizeof(char));
    printf("%d bytes it the size of long",sizeof(long));
    printf("%d bytes it the size of long long",sizeof(long long));
    printf("%d bytes it the size of long double",sizeof(long double));
}