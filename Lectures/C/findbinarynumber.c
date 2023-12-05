#include<stdio.h>
void main(){

	int i=12;
	printf("Enter the number to find binary number:" );
	scanf("%d",&i);
	do{
		int reminder=i%2;
		printf("%d\n",reminder);
		
		
		i=i/2;
		if(i/2==1)
		{
			reminder=i%2;
			printf("%d\n",reminder);
			
		}
		
	}
	while(i/2 != 0);

}


