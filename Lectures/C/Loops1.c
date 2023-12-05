//Write a C program to print all natural numbers in reverse (from n to 1).

#include<stdio.h>
void main(){
	int n;
	
	printf("Please enter the number: ");
	scanf("%d",&n);
	//5,4,3,2,1
	
	for(int i=n; i>=1; i--)
	{
		printf("%d\n",i);		
	}
	
}