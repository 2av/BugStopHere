//C Program to Calculate Sum of Natural Numbers Farmua: (n*(n+1))/2
// 1-5
//1+2+3+4+5=> 500
//1+2+3.... +500

/*
start
	declare the n,sum variable
	read the value in n
	apply the farmula
	display the answer	
end

*/
#include<stdio.h>
void main(){
	int n,sum;
	scanf("%d",&n);
	sum=(n*(n+1))/2;  //5: (5*(5+1))/2  =>(5*6 )/2 =>30/2 =>15
	printf("%d",sum);
}