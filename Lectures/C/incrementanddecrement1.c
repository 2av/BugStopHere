#include<stdio.h>
void main(){
	int i=10;
	int j=20;
	int k=0;
	printf("First i=%d   j=%d  k=%d\n",i,j,k); // 10 20 0
	
	i--;   // minus 1 number  10->9   Postfix
	j--;  // minus 1 number   10->9   postfix
	printf("Second  i=%d   j=%d  k=%d\n",i,j,k);  // 9 19 0
	
	--i;   // minsu 1 number  9->8   prefix
	--j;  // minus 1 number   19->18  prefix
	printf("third  i=%d   j=%d  k=%d\n",i,j,k);  // 8 18 0
	
	
	k=i--;  //postfix Fisrt assign then decrement itself
	
	printf("fourth  i=%d   j=%d  k=%d\n",i,j,k); // 7 18 8
	 
	k=--i ;   //prefix Fisrt decrement itself then assign
	printf("fifth  i=%d   j=%d  k=%d\n",i,j,k);  //6 18 6
	 
}