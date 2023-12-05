/*
11. Write a C program to calculate profit and loss on a transaction.
Test Data :
500 700
Expected Output :
You can booked your profit amount : 200
*/


#include<stdio.h>
void main(){
	float pamt,samt, PL;
	
	printf("Please enter the purchase amount: ");
	scanf("%f",&pamt); //200
	
	printf("Please enter the sell amount: ");
	scanf("%f",&samt); //300
	
	PL= samt-pamt;  // 300-200 =>100
	if(PL>0)
	{
		printf("You can booked your profit amount : %.2f",PL);
	}
	else
	{
		printf("You can booked your loss amount : %.2f",PL);	
	}
	


}