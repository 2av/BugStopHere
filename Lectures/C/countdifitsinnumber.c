/*
//Write a C program to count number of digits in a number.

5456  -> 4 digits
2315641-> 7 digits
56465->  5 digits

5456/10 ->546   1
546/10   54    2
54/10    5    3
5/10     0   4
 
*/
#include<stdio.h>
void main(){
	int number;
	int count=0;
	printf("Please enter the number to find digits: ");
	scanf("%d",&number);
	printf("original number: %d\n",number);
	int ld=number%10;
	int fd;
	do
	{
		if(number/10==0)
		{
			fd=number;
		}
		number=number/10;
		count++;
		//printf("%d \n",number);
	
	}while(number!=0);
	printf("Total digits is %d\n",count);
	
	
	printf("First digit is %d \n",fd);
	printf("Last digit is %d ",ld);

}
 



