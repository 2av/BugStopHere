#include<stdio.h>
#include<string.h>
void main(){
	char firstname[50];
	char secondname[50];
	char FullName[100]="";
	printf("Enter First name: ");
	scanf("%s",&firstname);
	
	printf("Enter Second name: ");
	scanf("%s",&secondname);
	
	//printf("Full Name is: %s %s",firstname,secondname);
	strcat(FullName,firstname);
	strcat(FullName,secondname);
	 printf("Full Name is: %s ",FullName);
}