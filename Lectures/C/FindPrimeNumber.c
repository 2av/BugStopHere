/*C Program to Check Whether a Number is Prime or Not
1 Prime
2 Prime
3 Prime
4 2 - Not prime
5 Prime
6 2,3 - not prime
7 - prime
8 2,4  - not prime
9 3 - not prime
10 2,5 not prime
*/
// with for loop
// without for loop -> if

#include<stdio.h>
void main(){
	int i=9;
	int isdev=0;
	//% -> reminder
	/*
	if((i%2 == 0 && i!=2) || (i%3 == 0 && i!=3) || (i%4 == 0 && i!=4) || (i%5 == 0 && i!=5) || (i%6 == 0 && i!=6) || (i%7 == 0 && i!=7) || (i%8 == 0 && i!=8) || (i%9 == 0 && i!=9) ){
			printf("its not a prime number");
		
	}
	else{
		printf("its a prime number");
		
	}
	*/	
	
	if(i%2 == 0 && i!=2){
		isdev=1;
		printf("devide by 2\n");
	}
	if(i%3 == 0 && i!=3){
		isdev=1;
		printf("devide by 3\n");
	}
	if(i%4 == 0 && i!=4){
		isdev=1;
		printf("devide by 4\n");
	}
	if(i%5 == 0 && i!=5){
		isdev=1;
		printf("devide by 5\n");
	}
	if(i%6 == 0 && i!=6){
		isdev=1;
		printf("devide by 6\n");
	}
	if(i%7 == 0 && i!=7){
		isdev=1;
		printf("devide by 7\n");
	}
	if(i%8 == 0 && i!=8){
		isdev=1;
		printf("devide by 8\n");
	}
	if(i%9 == 0 && i!=9){
		isdev=1;
		printf("devide by 9\n");
	}
	
	
	if(isdev==1)
	{
		printf("its not a prime number");
	}
	else{
		printf("its a prime number");
		
	}
	
}
