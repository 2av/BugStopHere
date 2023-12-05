/*
2. Write a C program to check whether a given number is even or odd.
Test Data : 15
Expected Output : 15 is an odd integer

4%2 == 0 
6%2 =>0
*/
#include<stdio.h>
void main(){
	int number1;
	printf("Enter  number: ");
	scanf("%d",&number1);
	
	if(number1%2 == 0)
	{
		printf("%d is an even integer",number1);
	}
	else
	{
		printf("%d is an odd integer",number1);
	}	
} 









