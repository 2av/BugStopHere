//C Program to Check Whether a Number is Positive, Negative, or Zero
/*
1.start
2. declare the variable
3. display: enter the number
	read the number
4. if number is greter than 0 :positive
5. if number is less than 0 : negative
6. if number is equal to 0 : Zero
7.end
*/

#include<stdio.h>
void main(){
	int number;
	printf("Enter the number: ");
	scanf("%d",&number);
	if(number>0) // true 
	{
		printf("Positive");
	}
	if(number<0) // true 
	{
		printf("Negative");
	}
	if(number==0)
	{
		printf("Zero");
	}
}






