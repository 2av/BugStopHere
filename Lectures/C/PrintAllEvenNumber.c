//Write a C program to print all even numbers between 1 to 100.
//Write a C program to print all odd number between 1 to 100.
// 2 4 6 8 10 12 14 16 18 20 ...... 100
// 1 3 5 7 9 11 1 3 15
#include<stdio.h>
void main(){

	for(int i=1;  i<=100; i++)
	{
		//// i%2 == 0 -> even number
		// i%2 != 0  -> odd number
		if(i%2 == 0)   
		{
		 printf("%d \n",i);
		}
		 
	}
	
}

