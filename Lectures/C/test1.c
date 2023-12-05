#include<stdio.h>

int main(){
	
	register int i=10; 
	
	// local /global ->> RAM ->> Address
	// register ->> CPU  ->> fast access 
	printf("%d",i);
	
}