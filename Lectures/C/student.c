/*
int examsheet[100];  -> 100*4  =>400
 ->40*4=160
->40

 ->60  -- watse
 
 200
*/

#include<stdio.h>
#include<stdlib.h>
void main(){
	
	int size;// 5  20 byte
	int *student;
	
	printf("Enter the list of student : ");
	scanf("%d",&size);
	//student = (int*)malloc(4*size);
	student = (int*)calloc(size,4);
	
	for(int i=0; i<size; i++)
	{
		printf("%d\n",student[i]);
		///printf("Enter the number: ");
		//scanf("%d",*student[i]);
	}
	 
}