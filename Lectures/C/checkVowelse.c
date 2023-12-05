//C Program to Check Whether a Character is Vowel or Consonant
// a,e,i,o,u
/*
start
display: please ente the character
scan the character
check the chacter if it is under (a,e,i,o,u) 
	Vowelse
	
else
	Consonant

end	
*/

#include<stdio.h>
void main(){
	printf("Please enter the character: ");
	char name;
	scanf("%c",&name);
	//|| (Logical OR)  -> if any one condition is true
	if(name=='a' || name=='e' || name=='i' || name=='o' || name=='u')
	{
		printf("Its a Vowel");
		
	}
	else{
		printf("Its a Consonant");
	}	 
}


