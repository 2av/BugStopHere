/*
==Array==>
-What is an array -> more than varibale with same datatype, Array
-how to declare array
-how to initilized array
-how to access the data from array

*/

#include<stdio.h>
void main(){

	int i,j,k;
	i=10;
	j=20;
	k=30;
	
	int number[3];    // define a varibale with square bracket size, array -> starting index start from 0
	number[0]=10;
	number[1]=20;
	number[2]=30;  /// last index will lentgh-1 3  > 2
	
	int data[10]={10,20,30,40,50,60,70,80,90,100};  //5
	int price[]={10,20,30,40,50,60,70,80,90,100,500,600};  /// price[6]
	printf("number[1] : %d\n",number[1]);
	printf("data[5] : %d\n",data[5]);
	printf("price[5] : %d\n",price[11]);

}
 