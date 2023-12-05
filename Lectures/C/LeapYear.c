//C Program to Check Leap Year => (Y%4==0 && Y%100 !=0) || (Y %400==0)
/*
start
get year
check the farmula
if true then leap year
other wise not leap year
end
*/

#include<stdio.h>
void main(){
	int year;
	printf("Please enter the year to check leap year: ");
	scanf("%d",&year); 
	
	if( (year%4==0 && year%100 !=0)  || year%400==0)
	{
		printf("Its a Leap Year");
		
	}
	else
	{
		printf("Its not a Leap Year");
	}
}







