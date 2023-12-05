/*
enter the totalPer % of student
30 -> Fail  
40  -> C grade  30-40
60  -> B grade  40-60
80  -> A grade  
*/

#include<stdio.h>
void main(){
	int totalPer;
	printf("enter the totalPer of student");
	scanf("%d",&totalPer);  //50
	if(totalPer<=30)
	{
		printf("Fail");
	}
	else if(totalPer>30 && totalPer<=40)  //30-35  c1   36-40 c2
	{
		printf("C grade\n");
		if(totalPer>30 && totalPer<=35)
		{
			printf("C1 grade");
		}
		else
		{
			printf("C2 grade");
		}
	}
	else if(totalPer>40 && totalPer<=60)
	{
		printf("B grade");
	}
	else{
		printf("A grade");
	}

}


