//Assignment oprator

#include<stdio.h>
void main(){
	 
	int i=10;   // assign the value  Left se right
	int j=20;
	int k=30;
	
	printf("i=%d  j=%d  k=%d \n",i,j,k);
	i=k;   // i=30
	k=j;   // k=20    -> j
	printf("i=%d  j=%d  k=%d \n",i,j,k);
	
	//i=i+10;   // i=30+10  i= 40
	i+=10;  // i=i+10;   // 40
	j+=20;  //j=j+20;   //  40
	k-=10;  //k=k-10;   //  10
	printf("i=%d  j=%d  k=%d \n",i,j,k);
	
	
}