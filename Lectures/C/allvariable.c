#include<stdio.h>
#define PI 3.14    //constant  -> float
#define abc main  // constant ->function
const int i=10;   // integr constant
const char c='A';  // charcter constant
const float p=20.5; // floating constant

void func1(){
static int i=10;
auto int j=10;  // implicit auto /explicit auto

	i++;
	j++;
	printf("i=%d  j=%d\n",i,j);
}

int abc(){
printf("%f  \n",PI);	
func1();	
func1();
func1();	
return 0;
}