#include<stdio.h>
/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
	1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/
void main()
{
	for(int i=1; i<=5; i++)  // outer loop 1- //ROW
    {
		for(int sp=1; sp<=5-i ; sp++)
		{
			printf(" ");
		}
		
		for(int j=1; j<=i; j++) //inner loop   //col
		{ 
			printf(" %d ",j) ;
			
		}
		printf("\n");		
		
	}
}