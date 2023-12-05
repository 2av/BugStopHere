#include<stdio.h>
void righthalfP(int row,int col){
	for(int r=0; r<row; r++)
	{
		for(int c=0; c<=r; c++)
		{
			printf("* ");
		}
		printf("\n");
		
	}
}

void leftthalfP(int row,int col){
	for(int r=0; r<row; r++)
	{
		for(int c=0; c<=col-r; c++)
		{
			printf(" ");
		}
		for(int c=0; c<=r; c++)
		{
			printf("*");
		}
		printf("\n");
		
	}
}
void FullP(int row,int col){
	for(int r=0; r<row; r++)
	{
		for(int c=0; c<=col-r; c++)
		{
			printf(" ");
		}
		for(int c=0; c<=r; c++)
		{
			printf("* ");
		}
		printf("\n");
		
	}
}

void IRHP(int row,int col){
	for(int r=0; r<row; r++)
	{
		for(int c=0; c<col-r; c++)
		{
			printf("* ");
		}
		printf("\n");
		
	}
}

void main(){
	int row=5;
	int col=5;
	//righthalfP(row,col);
	//leftthalfP(row,col);
	//FullP(row,col);
	IRHP(row,col);
}