#include<stdio.h>
#include<string.h>
void main(){
	//Login Code
	// userid:1002, password:abc123
	char userid[50]="1002";
	char password[50]="abc123";
	
	char _userid[50],_password[50];
	printf("Please enter the userid: ");
	scanf("%s",&_userid);
	printf("Please enter the password: ");
	scanf("%s",&_password);
	
	if(strcmp(userid,_userid) ==  0 )
	{
		printf("userd id match\n");
		
		
	}
	else{
		printf("userd id not match\n");
	}
	 
	 
	 
	 if(strcmp(password,_password) ==  0 )
	{
		printf("password match\n");
		
		
	}
	else{
		printf("password not match\n");
	}
	
	if(strcmp(userid,_userid) ==  0  && strcmp(password,_password) ==  0)
	{
		printf("Login Success\n");
		
	}
	else
	{
		printf("Login Fail\n");	
	}
	
}