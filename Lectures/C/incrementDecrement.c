#include<stdio.h>
int main(){
	int i=10;
	int j=20;
	
	printf("this is value of i = %d\n",i);
	printf("this is value of j = %d\n",j);
	
	i++;  //11 increment add 1 value
	j--;  //19 decrement minus 1 value
	
		
	printf("this is value of i = %d\n",i);
	printf("this is value of j = %d\n",j);
	
	++i;  // 12
	--j;  // 18
	
	printf("this is value of i = %d\n",i);
	printf("this is value of j = %d\n",j);
	
	int a=++i;   // pre  post
	printf("this is value of a = %d\n",a);
	printf("this is value of i = %d\n",i);
	return 0;
}