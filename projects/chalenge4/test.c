#include <stdio.h>

int main () {
   int enteredMinutes;
   double year =0.0, month = 0.0, day = 0.0;
   double minutesInYear = 60 * 24 * 265;

   printf("Enter the number of Minutes: ");
   scanf("%d", &enteredMinutes);

   month = enteredMinutes / 60.0 / 24.0 / 31.0;

   day = enteredMinutes / 60.0 / 24.0;

   year = enteredMinutes / minutesInYear;

   printf("\n%d minutes aproximatly is %f years, %f months and %f days\n", enteredMinutes,year, month, day);

   
   return(0);
}