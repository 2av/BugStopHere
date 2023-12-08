/*
Find the largest element using dynamic memory management
1. declare pointer varibale
2. get the size of array
3. create dynamic memory -> calloc
	get the number 2 41 63 9 3 7
4. check the largest number
5. print the largest number
6. free the memory
*/

#include<stdio.h>
#include<stdlib.h>
void main(){
 int *ptr;
 int size;
 int max=0;
 
 printf("Please the size value: ");
 scanf("%d",&size);
 
 ptr=(int*)calloc(size,sizeof(int));   /// dynamic memory
 
 printf("enter number %d times \n",size);
 for(int i=0; i<size; i++)  // array starting index 0
 {
	scanf("%d",&ptr[i]);
	 
 }
 
 max=ptr[0];
 for(int i=1; i<size; i++)  // array starting index 0
 {
	 if(max<ptr[i])
	 {
		 max=ptr[i];
	 }
	 
 }
 printf("Largest number is %d ",max);
 free(ptr);
}