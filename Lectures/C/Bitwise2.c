#include<stdio.h>
void main(){
	int i=12;
	int j=5;
	
	int xor=i^j;
	printf("^ (Bitwise XOR)= %d\n",xor);
	/*1100 -12
	  0101 -5
	  --------------
	  1001
	  3210
	  2*2*2+ 1	

		8+1=> 9
	*/
	
	
	int bnot=i>>2;
	 printf(">> (Right shift) a>>2= %d\n",bnot);
	 
	 int bnot1=i<<2;
	 printf("<< (Left shift) a<<2= %d\n",bnot1);
	/* 
	  
	*/

}
