/*
Name: Ian Brightone 
Reg No: PA106/G/28793/25
Description: A C function for a Hotel Management System: 
            1D Array - Weekly Revenue Tracker 
*/

#include <stdio.h>

int main() {
// Array Declaration 
    float revenue[7], total = 0, average;
    
    // Prompting Revenue entry for each day
    printf("Enter revenue for 7 days:\n");
    for(int i = 0; i < 7; i++) {
        printf("Day %d: ", i+1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }
// Calculation of Daily Average Revenue 
    average = total / 7;

// Displaying Weekly Revenue and Average Daily Revenue 
    printf("Total Weekly Revenue: Ksh %.2f", total);
    printf("\nAverage Daily Revenue: ksh %.2f", average);

    return 0;
}