#include<stdio.h>
void main(){
	int i=10;
	int j=20;
	int k=0;
	printf("First i=%d   j=%d  k=%d\n",i,j,k); // 10 20 0
	i++;   // add 1 number  10->11   Postfix
	j++;  // add 1 number   10->11   postfix
	printf("Second  i=%d   j=%d  k=%d\n",i,j,k);  // 11 21 0
	
	++i;   // add 1 number  10->12   prefix
	++j;  // add 1 number   10->12   prefix
	printf("third  i=%d   j=%d  k=%d\n",i,j,k);  // 12 22 0
	
	k=i++;  //postfix Fisrt assign then increment itself
	
	printf("fourth  i=%d   j=%d  k=%d\n",i,j,k); // 13 22 12
	
	k=++i ;   //prefix Fisrt increment itself then assign
	printf("fifth  i=%d   j=%d  k=%d\n",i,j,k);  //14 22 14
}