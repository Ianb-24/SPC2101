/*
Name: Ian Brightone 
Reg No: PA106/G/28793/25
Description: A program to find the surface area and volume of a cylinder 
*/

# include <stdio.h>
int main () {
 float radius,height,volume,surface_area;
 float pi=3.142;
 
 //prompt to enter variables 
 printf("enter radius:");
 scanf("%f", &radius);
 
 printf("enter height:");
 scanf("%f", &height);
 
 //execution
 volume=pi*radius*radius*height;
 surface_area=2*pi*radius*radius + 2*pi*radius*height;
 
 //Display 
 printf("\n volume is 2%f", volume);
 printf("\n surface_area 2%f", surface_area);
 
 return 0;
 } 
 