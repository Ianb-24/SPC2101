/*
Name: Ian Brightone 
Reg No: PA106/G/28793/25
Description: A program to prompt entry and display of height, ID_Number and bank_balance
*/

# include <stdio.h>
int main () {
 int height;
 float bank_balance;
 char ID_Number;
 
 //prompting user to enter values of variables
 printf("height:");
 scanf("\n%d", &height);
 
 printf("bank_balance:");
 scanf("\n%f", &bank_balance);
 
 printf("ID_Number:");
 scanf("\n%c", &ID_Number);
 
 //Display of variables 
 printf("height is %d\n", height);
 printf("bank_balance is %2f\n", bank_balance);
 printf("ID_Number is %c\n", ID_Number);
  
 return 0;
 } 
 