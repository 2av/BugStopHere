//Write a C program to print all alphabets from a to z. – using while loop
#include<stdio.h>
void main()
{
	int start=97;
	int end=122;
	while(start<=end)
	{
			printf("%c ",start);
			start++;
	}

}