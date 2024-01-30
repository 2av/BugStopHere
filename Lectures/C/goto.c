#include<stdio.h>
void main()
{
	int age=25;
	
	printf("this is 1 line \n");
	if(age<20){
		goto lable2;
	}
	else{
		goto lable1;	
	}
	
	lable1:
	printf("this is 2 line \n");
	printf("this is 3 line \n");
	printf("this is 4 line \n");
	printf("this is 5 line \n");
	
	 

	lable2:
	printf("this is 8 line \n");
	printf("this is 9 line \n");
}