// read the value from user and sum those value
#include<stdio.h>
int main(){
	int firstnumber=10;  // declare+defination+initialization
	int secondnumber=20;
	int total=firstnumber+secondnumber;
	
	printf("firstnumber: %d\n",firstnumber);
	printf("secondnumber: %d\n",secondnumber);
	printf("total: %d\n",total);
	
	printf("-----------------------------\n");
	int f,s,t;  // declare+defination
	printf("Enter first number:");
	scanf("%d",&f);  //initialization
	printf("Enter second number:");
	scanf("%d",&s);  //initialization
	t=f+s;
	printf("f: %d\n",f);
	printf("s: %d\n",s);
	printf("t: %d\n",t);
	return 0;
}