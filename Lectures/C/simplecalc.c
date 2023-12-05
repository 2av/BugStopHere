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
	switch(option)
	{
		case 1:
				result=first+second;
				printf("Adition---  %d\n",result);
		break;
		
		case 2:
				result=first-second;
				printf("Substract---  %d\n",result);
		break;
		
		
		case 3:	
				result=first*second;
				printf("Multiplication---  %d\n",result);
		break;
		
		case 4:
				result=first/second;
			printf("Division---  %d\n",result);
		break;
		
		default:
			printf("invalid option");
		break;
		
	}
	
	 
}










