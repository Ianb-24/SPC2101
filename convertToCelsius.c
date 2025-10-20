/*
Name: Ian Brightone 
Reg No: PA106/G/28793/25
Description: A C function to convert Fahrenheit to celcius
*/

#include <stdio.h>

// Function Declaration and Definition 
float convertToCelsius(float fahrenheit) 
{
    float celsiusTemp= (fahrenheit - 32) * 5.0 / 9.0;
    return celsiusTemp;
}

        //Main Function
int main() {
    float fahrenheit,celsiusTemp;

    // Prompting user to enter temperature in Fahrenheit 
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Function call
    celsiusTemp = convertToCelsius(fahrenheit);
    printf("Temperature in Celsius = %.2f°C\n", celsiusTemp);

    return 0;
}
