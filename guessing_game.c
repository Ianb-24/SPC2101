/*
Name: Ian Brightone 
Reg No: PA106/G/28793/25
Description: A program to implement a number guessing game
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, attempts = 0;
    srand(time(0));  //  random number generator
    secret_number = rand() % 20 + 1;  // Random number between 1 and 20

    do {
    
    // prompting user to guess the secret number
        printf("Enter your guess (1-20): ");
        scanf("%d", &guess);
        attempts++;
        
        if (guess > secret_number)
            printf("Too high!");
        else if (guess < secret_number)
            printf("Too low!");
        else
            printf("Congratulations!");
    } while (guess != secret_number);
    
    // Displaying number of attempts 
    printf("You guessed it in %d attempts.", attempts);
    
    return 0;
}


    
  
 