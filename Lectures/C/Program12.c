#include<stdio.h>
void main(){

	 int customerID;
	 char name[50];
	 float unit,charges=1.20, BillAmount=0,amt=0;
	 
	 printf("Enter Consumer ID: ");
	 scanf("%d",&customerID);
	 
	 printf("Enter Consumer name: ");
	 scanf("%s",&name);
	 
	 printf("Enter Consumed Units: ");
	 scanf("%f",&unit);
	 
	 if(unit>=200 && unit<400)
	 {
		charges=1.50 ;
	 }
	 else if(unit>=400 && unit<600)
	 {
		 charges=1.80 ;
	 }
	 else
	 {
		 charges=2.0 ;
	 }
	 
	 BillAmount=unit*charges;
	 
	 if(BillAmount>400)
	 {
		 amt=(BillAmount/100.00)*15.00;
		 printf("15%% surcharges %f\n",amt);
		 
		 BillAmount =  amt + BillAmount;
		 
	 }
	 
	 if(BillAmount<100)
	 {
		 BillAmount=100;
	 }
	 
	 printf("Customer IDNO: %d\n",customerID);
	 printf("Customer Name : %s\n",name);
	 printf("unit Consumed : %f\n",unit);
	 printf("Amount Charges @Rs. %f per unit : %f\n",charges,BillAmount);
	 
	 if(BillAmount>400)
	 {
		 amt=(BillAmount/100.00)*15.00;
		 printf("15%% surcharges %f\n",amt);
		 
		 BillAmount =  amt + BillAmount;
		 
	 }
	 printf("Surchage Amount : %f\n",amt);
	 printf("Net Amount Paid By the Customer : %f\n",BillAmount);
  
	 
}