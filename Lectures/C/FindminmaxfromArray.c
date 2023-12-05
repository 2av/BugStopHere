// max and min
#include<stdio.h>
void main(){
	
	// index 0
	// last lentgh -1
	
	int data[10]={20,10,40,500,10,60,0,80,90,-100}; 
	int min=data[0];  // 20
	int max=data[0];
	/*
	if(data[1]<min)
	{
		min=data[1];  //10
	}
	if(data[2]<min)
	{
		min=data[2];  //10
	}
	if(data[3]<min)
	{
		min=data[3];  //10
	}
	if(data[4]<min)
	{
		min=data[4];  //10
	}
	*/
	for(int index=1; index<10; index++)
	{
			if(data[index]<min)
			{
				min=data[index];  //10
			}
			if(data[index]>max)
			{
				max=data[index];  //10
			}
	}
	printf("Minimum Number is: %d\n",min);
	printf("Maximum Number is: %d",max);
	

}