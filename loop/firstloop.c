#include <stdio.h>
#include <stdlib.h>
int main () {
    int sum;
    for (int i = 0; i < 5; i++){
        sum += i;
        printf("%d\n", sum);
        int ran = rand() % 20;
        printf("randon: %i", ran);

    }

    enum Day { Monday, Thuesday, Wednesday, Thursday, Friday, Saterday, Sunday };

    for( enum Day day = Monday; day <= Sunday; ++day){
        if (day == Wednesday)
            continue;
        
        printf("It is not Wednesday! it is %u \n", day);
    }
        
}