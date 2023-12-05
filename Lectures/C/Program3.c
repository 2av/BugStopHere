//C Program to Print an Integer Entered By the User

#include<stdio.h>
int main(){
	int i;
	printf("Please enter a number:" ); 
	scanf("%d",&i);  // & get the address 
	
	printf("Hi, Your number is: %d",i);
	
	return 0;
}