#include<stdio.h>
int k=100;  // global varibale
void test(){
	int i=10;  //Local varibale
	int j=50;  // Local Variable
	printf("Hi this is new function %d\n",i);
	
	if(i<20){
		//int j=60;
		printf("I=%d is less than 20 and j ki value %d\n",i,j);
		
	}
	
	printf("the value j outside %d\n",j);
	printf("k in test=%d\n",k);
	k=50;
}

// share market value
int main(){
	test();  // function caling
	int i=20;  // local variable
	int j=100;
	printf("hi this main function %d\n",i);
	printf("the value j in main %d\n",j);
	k=150;
	printf("k in main=%d\n",k);
	test();
	return 0;
}


/*
Local means: only use in within a block -> declare inside the block function
Global Means: any one can use -> declare outside

*/