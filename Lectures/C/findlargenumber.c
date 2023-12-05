//C Program to Find Largest Number Among Three Numbers
// i=10 j=20 k=30
/*
	start
		get 3 number
		now check first with second and third if this is greater the first number is greater
		now check second with first and third if this is greater the second number is greater
		Third is greater	
	end
*/

#include<stdio.h>
void main(){
	int i,j,k;
	printf("Please enter the number: ");
	scanf("%d",&i);
	scanf("%d",&j);
	scanf("%d",&k);
	//&& (Logical AND)
	if(i>j && i>k) //20 >30
	{
		printf("Largest number is %d",i);
	}
	else if(j>i && j>k) //30>20 && 30 >100
	{
		printf("Largest number is %d",j);
	}
	else
	{
		printf("Largest number is %d",k);
	}

}