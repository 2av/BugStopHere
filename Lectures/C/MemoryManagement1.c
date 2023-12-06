#include<stdio.h>
#include<stdlib.h>
void main(){
	
	 int *ptr;
	 int size;
	 printf("Enter size:");
	 scanf("%d",&size);
	 
	 ptr=(int*)calloc(size, sizeof(int));  //00
	 
	 printf("enter your number:\n");
	 for(int i=0; i<size; i++)
	 {
		 scanf("%d",&ptr[i]);
		 
	 }
	 
	 printf("Your number is\n");
	 for(int i=0; i<size; i++)
	 {
		 printf("%d ",ptr[i]);
	 }
	 
	 printf("Enter new size: ");
	 scanf("%d",&size);
	 ptr = (int *)realloc(ptr ,size* sizeof(int));
	 
	 printf("Your number is\n");
	 for(int i=0; i<size; i++)
	 {
		 printf("%d ",ptr[i]);
	 }
	 
	 free(ptr);
}