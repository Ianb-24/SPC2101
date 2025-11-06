/*
Name: Ian Brightone
Registration No: PA106/G/28793/25
Description: A C program to to read all transactions of a retail shop
 calculates and displays the total sales per day
*/

# include<stdio.h>
int main(){
FILE *fp;
float amount, total=0;

// Opening a text file to store daily transactions of a small retail shop 
 fp= fopen("C:\\Users\\Home\\Documents\\Projects\\sales.txt","r");
 if(fp==NULL){
	 printf("File not found");
	 return 1;
 }	
 
	// Reading all transactions from the file
	while(fscanf(fp,"%f", &amount)==1){
		total += amount;// Calculating total sales of the day
 	}
 	
	fclose(fp);// closing the file
	
	// Display of Total Sales for the day
	printf("Total sales for the day: %.2f\n", total);
	
	return 0;
}