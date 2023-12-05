//5,3,11,10,4,1,9,15,21,33 ka largest number batana hai using array

#include<stdio.h>
int main(){
	int i[]={5,300,11,10,4,1,9,15,21,33};  //index start from 0
	
	// without for loop	
	int max=i[0];  //5
	if(i[1]>max){
		max=i[1];
		}  // 3>5 
	if(i[2]>max){max=i[2];}  // 11 >5 ==>>11
	if(i[3]>max){max=i[3];}  // 10 >11 
	if(i[4]>max){max=i[4];}  // 4> 11
	if(i[5]>max){max=i[5];}   // 1>11
	if(i[6]>max){max=i[6];}  // 9>11
	if(i[7]>max){max=i[7];}   // 15>11  ==> 15
	if(i[8]>max){max=i[8];}   // 21 >15 ==>21
	if(i[9]>max){max=i[9];}   // 33>21  ==>33
	printf("find max without for loop %d\n",max);
	
	
	// with for loop
	int j[]={5,3,11,10,4,1,9,15,21,33};  //index start from 0
	int max1=j[0];  //5
	for(int index=1; index<10 ; index++)
	{
		if(j[index]>max1){max1=j[index];} 
		
	}
	printf("find max with for loop %d\n",max1);
	return 0;
}