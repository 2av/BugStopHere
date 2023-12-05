#include<stdio.h>
void main(){
	int i,j,tot;
	i=10;
	j=20;
	
	tot = i - j * j ;  //10-20*20
	printf("Tot: %d\n",tot);
	
	tot = 10 + 10 * 2; // 30
	//10 +20 
	// 30 
	printf("Tot: %d\n",tot);
	
	tot = (10+10)*2;   // 40
	//20*2
	//40
	
	printf("Tot: %d\n",tot);
	
	tot = (10+10)* 2 * (20+20);   // 40
	//20*2*40
	//
	
	printf("Tot: %d\n",tot);

}