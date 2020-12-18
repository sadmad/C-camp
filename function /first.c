#include <math.h>
#include <stdio.h>

int gcd (unsigned int a, unsigned int b){
    int gcdNum = 0;
    if ( a > b){
        for (int i = 1; i <= a; i++ ){
            if (a % i == 0){
                for (int j =1; j<=b; j++){
                    if (b % j == 0 && j == i){
                        if ( j > gcdNum)
                            gcdNum = j;
                    }
                }
            }   

        }
    }else{
        for (int i = 1; i <= b; i++ ){
            if (b % i == 0){
                for (int j =1; j<=a; j++){
                    if (a % j == 0 && j == i){
                        if ( j > gcdNum)
                            gcdNum = j;
                    }
                }
            }   

        }
    }
    return gcdNum;
};

float absoluteValue(float a){
    if (a < 0 )
        return a * -1;
    else
        return a;   
};

int squareroot(int a){
    return sqrt(a);
};

int main (){
    unsigned int a, b; 
    printf("Pleas input the first number to find out their gcd:");
    scanf("%u", &a);
    printf("Pleas input the second number to find out their gcd:");
    scanf("%u", &b);
    int c = gcd(a, b);
    printf("GCD between the two number is %i\n so if you want do savior plz enter a num:", c);
    float d;
    scanf("%f", &d);
    printf("%.2f", absoluteValue(d));
    printf("\npleas input the num you want to know the square root:");
    int f;
    scanf("%i", &f);
    printf("The square root is:%i", squareroot(f));
    
    return 0;
}