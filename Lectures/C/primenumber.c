//Write a C program to check whether a number is Prime number or not.
// 5  2,3,4
// 6  2,----
#include<stdio.h>
void main()
{
	int n,isdevide=0;
	printf("Please enter the number:");
	scanf("%d",&n);
	
	for(int start=2; start<n ; start++ )
	{
			printf("trying with %d\n",start);
			if(n%start==0)
			{				
				isdevide=1;
				break;
			}
	}
	
	if(isdevide==0)
	{
		printf("its a prime number");
	}
	else
	{
	printf("its not a prime number");	
	}

}