#include <stdio.h>

int main () {

    int hours = 0;
    int overHours = 0;
    double netPay = 0.0;
    double grossPay = 0.0;
    double taxes = 0.0;

    //ask for the hours
    printf("Pleas enter the hours that you worked in the past week: \n");
    //get the hours
    scanf("%i", &hours);

    //check if they work les that 40 hours
    if ( hours <= 40 ){
        grossPay = hours * 12;
       
    }else{
        //calculating over hours
        overHours = hours - 40;
        grossPay = (40 * 12) + (overHours * 18);
    }
    double tax_300 = 300 * 15/100;
    double tax_450 = (grossPay - 300) * 20/100;
    if ( grossPay > 300 && grossPay <= 450 ){
        //tax for gross pay berween 300 and 450
        taxes = tax_300 + tax_450;
    }else if (grossPay > 450) {
        //taxt for gross pay more than 450
        taxes = tax_300 + ( 150 * 20/100 ) + ( (grossPay -450) * 25/100 );
    }else{
        taxes = grossPay * 15/100;
    }
    netPay = grossPay - taxes;
    printf("The Gross payment is: %.2f \n", grossPay);
    printf("The taxes is: %.2f\n", taxes);
    printf("The Net payment is: %.2f \n", netPay);
    

}