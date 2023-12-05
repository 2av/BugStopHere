/*
WAP to check armstrong number
123 -> 3 
   1*1*1+2*2*2+3*3*3 
   1 +8 + 27
   36
   
   123 !=36  
   
   23  =>  2*2  + 3*3
   2354 => 2*2*2*2  + 3*3*3*3 + 5*5*5*5 + 4*4*4*4
   2354/10 =>235
   235/10 => 23
   23/10 =>2
   2/10  =>0
   
   number=2354;
   1. check the digit
   2. mulitple the number by digit time
   3. sumation all the mutiplacation number
   4. check the original number and sumation number
   5. if same then its armstrong number
----------------------------------------------------
*/

#include<stdio.h>
#include<math.h>
void checkArmstrongnumber(int number){
	
	
	//int number=153; // 2*2*2 + 3*3*3 + 1*1*1 => 4+9+1=> 14
	long int count=0;
	long int sum=0;
	long int on=number;
	//1. check the digit
	long int temp=number; //231
	do
	{
		temp= temp/10;
		count++;
	}while(temp!=0);
	//printf("Digit of number: %d",count);


	do{
	//2. mulitple the number by digit time
	long int mod=number%10;  /// 231  -> 1
	number=number/10;
	//printf("\nmod of %d",mod);
	mod=pow(mod,count);
	//3. sumation all the mutiplacation number
	//printf("\nmod: %ld",mod); 
	sum=sum+mod;
	}while(number!=0);
	
	
	
	
	//4. check the original number and sumation number
    //5. if same then its armstrong number
	
	//printf("\nOriginal  number: %d",on);
	//printf("\nsumation of number: %d",sum);
	if(on==sum){
		
		printf("\nthis is armstrong number %d",on);
		
	}
	/*else{
		printf("\nthis is not armstrong number");
	}*/
}

void main(){
	
	for(int i=1; i<1000000; i++){
	checkArmstrongnumber(i);
	}
	//checkArmstrongnumber(153);
	
}







