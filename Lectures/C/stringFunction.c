#include<stdio.h>
#include<string.h>
void main(){
	char name[]="Hello Raj";
	char name1[50]="";
	printf("-------------strlen----------\n\n");
	printf("%s\n",name);
	printf("%d",strlen(name));
	
	
	printf("-------------strcpy----------\n\n");
	strcpy(name1,name);
	printf("name: %s\n",name);
	printf("name1: %s\n",name1);
	
	printf("-------------strcat----------\n\n");
	char name2[50]="Welcome,";
	strcat(name2,name);
	printf("name: %s\n",name);
	printf("name1: %s\n",name1);
	printf("name2: %s\n",name2);
}