//C Program to Multiply two Floating-Point Numbers 
#include<stdio.h>
void main(){

	float first, second,total;
	// hardcode set 
	first=5.5;
	second=3.2;
	total=first*second;
	printf("%f \n",total);
	
		// scan from the user
		printf("Enter first number: ");
		scanf("%f",&first);
		printf("Enter second number: ");
		scanf("%f",&second);
		total=first*second;
		printf("%f \n",total);
}
