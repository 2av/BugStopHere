/*
1. Write a C program to accept two integers and check whether they are equal or not.
Test Data : 15 15
Expected Output : Number1 and Number2 are equal
*/

#include<stdio.h>
void main(){
	int number1,number2;
	printf("Enter two number: ");
	scanf("%d %d",&number1,&number2);
	
	printf("number1=%d   number2=%d\n",number1,number2);
	if(number1==number2)
	{
		printf("Number1 and Number2 are equal");
	}
	else
	{
		
		printf("Number1 and Number2 are not equal");
	}

} 