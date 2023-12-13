#include<stdio.h>
#include<string.h>
void main(){
	char data[]="Welcome, in the bug stop here";
	char search[]="the";
	
	//char *find= strstr(data,search);
	char *find=strchr(data,'c');
	if(find==NULL)
	{
		printf("Text not found");
	}
	else{
		printf("%s \n",find);
		printf("Posistion: %ld",find-data);
	}
	
}