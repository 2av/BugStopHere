/*
10. Write a C program to check whether a character is an alphabet, digit or special character.
Test Data :
@
Expected Output :
This is a special character.
 ascii
 
 special-33 47   56 -64  91-96  123-126
 digit 47 - 57
 alphabate 65-90    97-122
*/

#include<stdio.h>
void main(){
	char name;
	printf("Enter the character : ");
	scanf("%c",&name);
	printf("%c -> %d \n",name,name);
	
	if( (name>=33 && name<48) || (name>=56 && name<65) || (name>=91 && name<97) || (name>=123 && name<127))
	{
		printf("special character");
		
	}
	else if((name>=65 && name<91) || (name>=97 && name<123))
	{
		printf("Alphabates character");
		
	}
	else if(name>=47 && name<58){
		printf("digits character");
	}
}

