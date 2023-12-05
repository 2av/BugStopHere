//Write a C program to print multiplication table of any number. 1-10

#include<stdio.h>
void main(){

	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(int i=1;  i<=10; i++)
	{
		printf("%d \n",n*i); 
		 
	}
	
}