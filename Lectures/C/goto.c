#include<stdio.h>
void main()
{
	int age=19;
	
	printf("this is 1 line \n");
	if(age<20){
	goto lable1;
	}
	
	printf("this is 2 line \n");
	printf("this is 3 line \n");
	printf("this is 4 line \n");
	printf("this is 5 line \n");
	
	lable1:
	printf("this is 6 line \n");
	printf("this is 7 line \n");
}