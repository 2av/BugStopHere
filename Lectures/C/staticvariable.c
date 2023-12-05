// local varible  or automatic varibale
// global varible
// static variable


#include<stdio.h>
int number=10;   // global var
void Counter(){
	
	int i=10;   // local varibale
	static int j=10;  // static variab  // in life only once define
	i++;
	j++;
	printf("counter i =%d   j= %d\n", i,j);
}

int main(){
	Counter();
	Counter();
	Counter();
	return 0;
}