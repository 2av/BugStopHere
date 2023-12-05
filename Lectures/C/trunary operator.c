/*
int i=10;
int j=20;

if(i<j)
{
	k=100;
}
else{
	k=300;
}


int k=(i<j && j>k)? 100 : 300; 
*/

#include<stdio.h>
void main(){
	int i=10;
	int j=20;
	/*int k;
	if(i<j)
	{
		k=100;
	}
	else{
		k=300;
	}*/
	
	int k=(i<j)? 100 : 300;
	
	printf("k=%d",k);

}


