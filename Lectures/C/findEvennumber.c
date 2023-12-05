//C Program to Check Whether Number is Even or Odd(devide by 2 %0)
/*
start
	plese enter the number
	declare 1 varibale
	read the value
	if this number is devided % by 0  ==
	
	if yes then EVEN
	else ODD

end

*/

#include<stdio.h>
void main(){
	int number, result;
	printf("plese enter the number: ");
	scanf("%d",&number);
	result=number %2;   // Artimetic opert
	if(result==0)
	{  //true
		printf("this is a EVEN number");
		
	}
	else
	{
		// false
		printf("this is a ODD number");
		
	}
	

}