/*
Name: Ian Brightone 
Reg No: PA106/G/28793/25
Description: A program to prompt the user to enter 
             password until the correct one is entered
*/

#include <stdio.h>
#include <string.h>

int main() {

    char password[20];  // Declare password as a char array to hold the input string

    do {
        printf("Enter password: ");
        scanf("%19s", password);  // Read input  into the array
    } while (strcmp(password, "1234") != 0);  // Compare input with correct password

    printf("Access Granted");

    return 0;
}
  
  
 