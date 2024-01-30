//how to use break  and conitnue in for loops 
// break -> stop
// continue-> skip
#include<stdio.h>
void abc(){

	printf("abc ");
}
int test(){

	printf("hi this is test function");
	abc();
}
int sum(int i,int j)
{
	sum(i,j);
	return i+j;
}
 

void main(){

	 
	printf("%d  \n",sum(10,20));
	printf("%d  \n",sum(10,30));
	printf("%d  \n",sum(20,20));
	
}