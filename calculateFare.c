/*
Name: Ian Brightone 
Reg No: PA106/G/28793/25
Description: A C function to Calculate fare
*/

#include <stdio.h>
// Function Definition and Declaration 
float calculateFare(float distance) {
    float farePerKm = 50.0;
    float totalFare = distance * farePerKm;
    return totalFare;
}
int main() {
    float distance, totalFare;
    
    printf("Enter distance traveled (in kilometers): ");
    scanf("%f", &distance);

    // Function call
    totalFare = calculateFare(distance);
    printf("Total fare = KSh. %.2f\n\n", totalFare);


    return 0;
}

 