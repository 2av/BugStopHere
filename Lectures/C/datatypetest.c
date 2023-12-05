#include<stdio.h>
int main(){
	// quantity , price
	/*
	int qty=5;
	float price=2.5; 
	float total=qty*price;   // 2.5 *3=7.5
	
	printf("%f",total);
	
	*/
	
	int qty;
	float price,total;
	printf("Please enter the price: ");
	scanf("%f",&price);
	
	printf("Please enter the Quantity: ");
	scanf("%d",&qty);
	
	total=price*qty;
	printf("Total Amount: %f",total);
	return 0;
	
}