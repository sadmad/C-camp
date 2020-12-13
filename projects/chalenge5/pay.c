#include <stdio.h>

int main() {

    int hours = 0;
    double overHours = 0.0;
    double grossPay = 0.0;
    double netPay = 0.0;
    double taxFirst = 300 * 15 / 100;
    double taxSec =  150 * 20 / 100;
    double taxRest = 0.00;
    double tax = 0.0;
    printf("tax first category %.2f\n", taxFirst);
    printf("tax first category %.2f\n", taxSec);
    printf("tax first category %.2f\n", taxRest);
    printf("How many hours did you work last week?");

    //get the input from the worker
    scanf("%i", &hours);

    if (hours > 40){

        printf("the first if is ok %.2f\n", hours);

        overHours = hours - 40;
        grossPay = (40 * 12.00) + (overHours * 18);

        printf("the gross Pay infirst if %.2f\n", grossPay);

    } else {
        grossPay = hours * 12.00;
    }
    printf("Gorss Pay is: %.2f\n", grossPay);
    if ( grossPay > 300.00) {
        tax = tax + taxFirst;
        if ( ( grossPay - 300.00 ) > 150 ){
            tax = tax + taxSec;
            if ( ( grossPay - 450 ) > 0 ){
                taxRest = (grossPay - 450) * 25 / 100;
                tax = tax + taxRest;
            }
        } else{
            tax = tax +  ((grossPay - 300.00) * 20/100 );
        }
    } else {
        tax = grossPay * 15 / 100;

    }
    printf("Tax is: %.2f\n", tax);
    netPay = grossPay - tax;
    printf("netpay is: %.2f\n", netPay);


}