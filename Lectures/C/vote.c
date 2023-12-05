// check the age for voating
/*
start
	declare variable age
	display: please enter the age
	read the age
	check if age>=18  you can vote
				other wise -> you can not vote
end

*/

#include<stdio.h>
void main(){
	int age,diff;
	printf("Please enter the age to find you vote or not: ");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("Hi you can vote....");
	}
	else
	{	
		diff=18-age;
		printf("sorry, you can not vote...., please wait for %d year",diff);
	}
	
	

}