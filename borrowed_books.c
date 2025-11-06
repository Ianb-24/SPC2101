/*
Name: Ian Brightone
Registration No: PA106/G/28793/25
Description: A C program to enter boook titles and store each title in a text file
*/

#include <stdio.h>
int main()
{
	
	FILE *fptr;
    char title[100];
    
   
fptr= fopen ("C:\\Users\\Home\\Documents\\Projects\\borrowed_books.txt", "a");
	if(fptr==NULL){
		printf("Error Opening file");
		return 1;
	}
	  // Entry of book title
	printf("Enter book title borrowed:");
	fgets(title, sizeof(title), stdin);
	
    fprintf(fptr, "%s", title); //Write title to file
	
	
 //confirmation messsage for succcessful title storage	
	printf("Book title successfully stored\n");
     fclose(fptr);
	 	
	return 0;
}