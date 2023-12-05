#include<stdio.h>
//re-use
 

void sum(int i,int j)  // method/function/ parathe
{
	int k=i+j;
	printf("Total is : %d\n",k);	
	
}

int sub(int i,int j)
{
	
	 return i-j;
	 
}


void main()
{
		//sum(10,20);
		//sum(10,50);
		int k=sub(50,30);
		printf("Diff of 50 and 30 is %d",k);		

}