/*C Program to Reverse a Number => 
		123  => 321
		5245 =>	5425
	
		111=>111
		123=>321
		515=>515
		
123   =>3  %  123%10=  3
12    =>2     123/10=12
1	  =>1

*/


#include<stdio.h>
void main(){
	int number;
	int reminder;
	printf("Enter the number: ");
	scanf("%d",&number);
	
	while(number!=0){
		reminder=number%10;   //3
		number=number/10;  //12
		printf("%d",reminder);
	}
	
	/*
	reminder=number%10;   //3
	number=number/10;  //12
	printf("%d",reminder);
	
	
	reminder=number%10;   //2
	number=number/10;  //1
	printf("%d",reminder);
	
	
	reminder=number%10;   //1
	number=number/10;  //0
	printf("%d",reminder);
	*/
}











