//Write a C program to print all natural numbers from 1 to n. – using for loop

#include<stdio.h>
void main(){
	int n;
	
	printf("Please enter the number: ");
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		printf("%d\n",i);		
	}
	
}