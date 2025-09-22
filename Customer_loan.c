/*
Name: Ian Brightone 
Reg No: PA106/G/28793/25
Description: A program to prompt the user to enter age and anual salary then give loan or deny according to requirements 
*/

# include <stdio.h>
int main () {
 float anual_salary;
 int age;
 
 // prompting user to enter details 
 printf("enter age:\n");
 scanf("%d",&age);
 
 printf("enter anual_salary:\n");
 scanf("%f", &anual_salary);
 
 // Test and implement 
  if (age>=21 && anual_salary>=21000)
  {
  printf("congratulations you qualify for a loan\n");
  }
  else {
  printf("unfortunately we are unable to offer you a loan at this time\n");
  }
  
 return 0;
 } 
 