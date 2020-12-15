#include <stdio.h>

int main() {
    
    double yearlyRainfall[2][5]= { 
        {2010, 2011, 2012, 2013, 2014}, 
        {32.4, 37.9, 49.8, 44.0, 32.9} 
        };
    const char *months[2][13] = {
        {"January", "Februrary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"},
        {"7.3", "7.3", "4.9", "3.0", "2.3", "0.6", "1.2", "0.3", "0.5", "1.7", "3.6", "6.7"}
        };
    double totalRainfall = 0.0;
    for(int i = 0; i <= 1; i++){
        if (i ==0){
            printf("YEAR\n");
        }
        else if(i == 1)
        {
            printf("RAINFALL\n");
        }
        
        for(int j = 0; j <= 4; j++){
            printf("%.1f\n", yearlyRainfall[i][j]);
            totalRainfall += yearlyRainfall[1][j];
        }
        
    }
    for(int i = 0; i <= 1; i++){
        if (i ==0){
            for(int j = 0; j <= 11; j++){
                printf("%s |", months[0][j]);
            }
            printf("\n");
        }
        else if(i == 1)
        {
            for(int j = 0; j <= 11; j++){
                printf("%s |", months[1][j]);
            }
            printf("\n");
        }
        
        
        
    }   
    
    return 0;



}