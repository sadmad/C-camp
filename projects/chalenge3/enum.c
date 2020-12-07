#include <stdio.h>

int main(){
    enum companies{GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum companies com1 = XEROX;
    enum companies com2 = GOOGLE;
    enum companies com3 = EBAY;
    printf(". %i\n", com1);
    printf(". %i\n", com2);
    printf(". %i\n", com3);
}