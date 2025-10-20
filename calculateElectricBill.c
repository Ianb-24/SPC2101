/*
Name: Ian Brightone 
Reg No: PA106/G/28793/25
Description: A C function to Calculate Electric Bill 
*/

#include <stdio.h>

//Function Declaration and Definition 
float calculateElectricBill(int units)
{
    float bill;

    if (units <= 100) 
    {
        bill = units * 10;
    } 
    else if (units <= 200) 
    {
        bill = (100 * 10) + (units - 100) * 15;
    } 
    else 
    {
        bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }

    return bill;
}
float calculateFare(float);

// Main function 
int main() {
    int units;
    float billAmount;
    
    printf("Enter number of electricity units consumed: ");
    scanf("%d", &units);

    // Function call
    billAmount = calculateElectricBill(units);
    printf("Total electricity bill = KSh. %.2f\n\n", billAmount);

    return 0;
}

