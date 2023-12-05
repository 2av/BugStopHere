#include<stdio.h>
void main(){
	int number1[10]={10,2,4,5,60,7,8,8,9,100};
	int number2[10]={1,2,40,5,6,7,8,80,9,100};
	
	
     int number3[10];
	 for(int i=0; i<10; i++){
	   number3[i]=number1[i]+number2[i];
	 }
	 
	 for(int i=0; i<10; i++){
	    printf("%d + %d = %d\n",number1[i], number2[i], number3[i]);
	 }
	 
	  
}