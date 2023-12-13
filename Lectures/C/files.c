#include<stdio.h>
void main()
{
	//step 1: object, file open
	FILE *file;
	char data[100];
	
	// step 2: open the file - fopen(filename, mode)
	file = fopen("example.txt", "w");
	if(file==NULL)
	{
		printf("File nahi mila");
	}
	printf("Please enter the text: ");
	scanf("%s",&data);
	
	///step 3: fprintf
	fprintf(file, "%s", data);
	
	//step 4
	fclose(file);
	
}