/*
Name: Ian Brightone 
Reg No: PA106/G/28793/25
Description: A program to show local mobile service provider offers on different data bundle
*/

# include <stdio.h>
int main () {
 int option;
 
 //Display of the menu 
 printf("Mobile Data Bundle Purchase\n");
 printf("1. 100MB - KES 50\n");
 printf("2. 500MB - KES 200\n");
 printf("3. 1GB - KES 350\n");
 printf("4. 2GB - KES 600\n");
 
 // Prompting user to enter their choice(option)
 printf("Enter your option(1-4).");
 scanf("%d", &option);
 
 //Switch Statements to process option switch 
 switch (option) {
   case 1:
   printf("you selected 100MB for KES 50\n");
   break;
   
   case 2:
   printf("you selected 500MB for KES 200\n");
   break;
   
   case 3:
   printf("you selected 1GB for KES 350\n");
   break;
   
   case 4:
   printf("you selected 2GB for KES 600\n");
   break;
   default:
   printf("Invalid Option");
   }
   
  return 0;
} 
 