/*
Write a C program to find sum of all natural numbers between 1 to n.
Write a C program to find sum of all even numbers between 1 to n.
Write a C program to find sum of all odd numbers between 1 to n.
*/

#include<stdio.h>
void main(){

	int n,sum=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(int i=1;  i<=n; i++)
	{
		if(i%2 != 0) 
		{
			sum=sum+i;  // sum += i;
			printf("i=%d sum=%d\n",i,sum); 
		} 
		 
	}
	 printf("Final total of number is: %d",sum); 
	
}