 #include<stdio.h>
 void main(){
 
	int stocprice=250;
	
	int *p1=&stocprice;
	int *p2=&stocprice;
	int *p3=&stocprice;
	printf("stocprice %d \n",stocprice);
	printf("P1=>%d P2=>%d  P3=> %d\n",*p1, *p2,*p3 );
	
	printf("\n-------------------------------\n");
	stocprice=350;
	printf("stocprice %d \n",stocprice);
	printf("P1=>%d P2=>%d  P3=> %d\n",*p1, *p2,*p3 );
 }