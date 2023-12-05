/*
3. Write a C program to check whether a given number is positive or negative.
Test Data : 15
Expected Output : 15 is a positive number
-1
-2
-3
 number<0  -- negative
 
*/
#include<stdio.h>
void main(){
	int number;
	printf("Enter  number: ");
	scanf("%d",&number);
	if(number>=0)
	{
		printf("%d is a positive number",number);
		
	}
	else
	{
		printf("%d is a negative number",number);
	}
	 
} 