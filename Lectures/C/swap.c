//C Program to Swap Two Numbers using third variable 
/*
1. start
2. define 3 variable
3. set the value in two varibale
4. print the value
5. swap the value
6. print the value
7. end
*/

#include<stdio.h>
void main(){
	int first,second,third;
	first=100;
	second=200;
	printf("First : %d  Second: %d\n",first,second);
	
	third=first;
	first=second;
	second= third;
	
	printf("First : %d  Second: %d\n",first,second);
	
}