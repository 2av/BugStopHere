/*
6. Write a C program to determine eligibility for admission to a professional course 
based on the following criteria: 
Eligibility Criteria : 
Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and 
Total in all three subject >=190 or Total in Maths and Physics >=140
 
Input the marks obtained in Physics :65 
Input the marks obtained in Chemistry :51 
Input the marks obtained in Mathematics :72 
Total marks of Maths, Physics and Chemistry : 188 
Total marks of Maths and Physics : 137 

The candidate is not eligible.
Expected Output :
The candidate is not eligible for admission.
*/

#include<stdio.h>
void main(){
	int Maths,Phy,Chem,totOfAll,totOfMP;
	printf("Input the marks obtained in Physics: ");
	scanf("%d",&Phy);
	printf("Input the marks obtained in Chemistry: ");
	scanf("%d",&Chem);
	printf("Input the marks obtained in Mathematics: ");
	scanf("%d",&Maths);
	printf("\n----------------------------------------\n");
	
	totOfAll=Maths+Phy+Chem;
	totOfMP =Maths+Phy;
	
	printf("Phy:%d  Chem:%d  Math:%d\n",Phy,Chem,Maths);
	printf("Total Marks:%d\n",totOfAll);
	printf("Total of Math and Phys:%d\n",totOfMP);
	 /*
	if( (Maths >=65 && Phy >=55 && Chem>=50) && ( totOfAll>=190 || totOfMP>=140 ))
	{
		//(T && T && T) && (F || F)
		//T && F =>F
		printf("The candidate is eligible for admission.");
	}
	else
	{
		printf("The candidate is not eligible for admission.");
	}
	 */
	
	if( Maths >=65 && Phy >=55 && Chem>=50)
	{
			if(totOfAll>=190 || totOfMP>=140)
			{
				printf("The candidate is eligible for admission.");	
			}
			else
			{
				printf("The candidate is not eligible for admission.");
			
			}
	}
	else
	{
		printf("The candidate is not eligible for admission.");
	}

}







