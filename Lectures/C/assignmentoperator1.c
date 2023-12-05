#include<stdio.h>
void main(){

	int i=100;   //%d
	int j=i;
	int k=i+j;
	
	printf("i=%d  j=%d  k=%d \n",i,j,k);
	k*=j; // k=k*j;  k=20*10 =>200
	printf("i=%d  j=%d  k=%d \n",i,j,k);
	
	
	
  float price=2.5;  // %f
  char name='A';   // %c  A->65
 
  printf("price=%f  name=%c \n",price,name);
  printf("%c",i);
}