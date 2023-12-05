
#include<stdio.h>
#include<math.h>
void checkArmstrongnumber(int number){
	
	
	
	long int count=0;
	long int sum=0;
	long int on=number;
	 
	long int temp=number; 
	do
	{
		temp= temp/10;
		count++;
	}while(temp!=0);
	 


	do{
	 
	long int mod=number%10;   
	number=number/10;
	 
	mod=pow(mod,count);
 
	sum=sum+mod;
	}while(number!=0);
	
	
	
	 
	if(on==sum){
		
		printf("\nthis is armstrong number %d",on);
		
	} 
}

void main(){
	
	for(int i=1; i<1000; i++){
	checkArmstrongnumber(i);
	} 
	
}







