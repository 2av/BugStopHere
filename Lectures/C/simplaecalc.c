//C Program to Make a Simple Calculator 
/*
start
	declare 3 variable 	first, second, result,option
	read the value in first and second variable
	display chose the option	
			1. +
			2. -
			3. * 
			4. /
			
	based on option show the output		
end
*/

#include<stdio.h>
void main(){
	int first, second, result,option;
	printf("Enter the first number :");
	scanf("%d",&first);
	
	printf("Enter the second number :");
	scanf("%d",&second);
	
	printf("Choose the option:\n");
	printf("1. +\n");
	printf("2. -\n");
	printf("3. *\n");
	printf("4. /\n");
	scanf("%d",&option);
	
	if(option==1)
	{
		result=first+second;
		printf("Adition---  %d\n",result);
		
	}
	
	else if(option==2)
	{
		result=first-second;
		printf("Substract---  %d\n",result);
	}
	else if(option==3)
	{
		result=first*second;
		printf("Multiplication---  %d\n",result);
	}
	else if(option==4)
	{
		result=first/second;
		printf("Division---  %d\n",result);
	}
	else{
		
		printf("invalid option");
	}
}










