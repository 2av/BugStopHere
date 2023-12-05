/*
5. Write a C program to find the largest of three numbers.
Test Data : 12 25 52
Expected Output :
1st Number = 12,        2nd Number = 25,        3rd Number = 52
The 3rd Number is the greatest among three


*/

#include<stdio.h>
void main(){
	int number1,number2,number3;
	printf("Enter 3 number: ");
	scanf("%d %d %d",&number1,&number2,&number3);
	printf("1st Number = %d, 2nd Number = %d, 3rd Number = %d\n",number1,number2,number3);
	/*
	 n1=150  n2=30  n3=10
	 case1: n1 > n2  && n1 > n3 == n1
	 case2: n2 > n1  && n2 > n3 == n2
	 case3: =>n3
	*/
	if(number1>number2  && number1> number3)
	{
		printf("The 1st Number is the greatest among three");
	}
	else if(number2>number1  && number2> number3)
	{
		printf("The 2nd Number is the greatest among three");
	}
	else
	{
		printf("The 3rd Number is the greatest among three");
	}	 
} 


