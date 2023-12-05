#include<stdio.h>
void main(){

	int i=100;
	int j=200;
	
	int k= i++ + j++ - ++i ;  //postfix
		// 101 +  200 - 101  //right left
		
	printf("i=%d  j=%d  k=%d \n",i,j,(101+200-101));

}