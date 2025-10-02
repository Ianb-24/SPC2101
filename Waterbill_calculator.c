/*
Name: Ian Brightone 
Reg No: PA106/G/28793/25
Description: A program to prompt the user to enter the number of water units and calculate the water bill
*/

# include <stdio.h>
int main () {

   //Variable Declaration 
  int water_units;
  float total_bill;
   
  // prompting user to enter number of water Units 
  printf("Number of water_units:");
  scanf("%d", &water_units);
  
  //If, else if and else statements 
  
  if( water_units >=0 && water_units<=30)
  {
  total_bill = water_units*20;
  }
  
  else if( water_units <=60)
  {
  total_bill = water_units*25;
  }
  
  else 
  {
  total_bill = water_units*30;
  }
  
  
  // Displaying total_bill in KES
  printf("Total_bill is: KES %.2f\n", total_bill);
  
  return 0;
} 
 