/*
Name: Ian Brightone
Registration No: PA106/G/28793/25
Description: A C program to define a structure to hold student records, read all
 student records from binary file and displays name and marks of each student
*/

# include<stdio.h>
# include <stdlib.h>

// structure Definition
struct Student
{
 char name[50];
 char regNo;
 int marks;
};

int main(){
	FILE *file;
	struct Student s;
	
	// Opening a binary file to store student examination results 
	file = fopen("C:\\Users\\Home\\Documents\\Projects\\results.dat", "rb");
	if(file==NULL)
	{
		printf("Error Opening file");
		return 1;	
	
	}
	
	//Reading and Display of student records from binary file
 printf("Student Records:");
 while(fread(&s, sizeof(struct Student),1,file))
{
	printf("Name: %s| RegNo: %s | Marks: %d", s.name, s.regNo, s.marks);
}

fclose(file);
	
	return 0;

}