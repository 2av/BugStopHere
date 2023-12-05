/*
7. Write a C program to read the roll no, name and marks of three subjects and calculate the total, 
percentage and division.
Test Data :
Input the Roll Number of the student :784
Input the Name of the Student :James
Input the marks of Physics, Chemistry and Computer Application : 70 80 90
Expected Output :
Roll No : 784
Name of Student : James
Marks in Physics : 70
Marks in Chemistry : 80
Marks in Computer Application : 90
Total Marks = 240
Percentage = 80.00
Division = First

*/

#include<stdio.h>
void main(){
	int rollno;
	
	float phy,chem,ca,totmarks,per;
	char name[50];
	printf("Input the Roll Number of the student: ");
	scanf("%d",&rollno);
	
	printf("Input the Name of the Student: ");
	scanf("%s",&name);
	
	printf("Input the marks of Physics, Chemistry and Computer Application: ");
	scanf("%f %f %f",&phy,&chem,&ca);
 
	printf("Roll No : %d\n",rollno);
	printf("Name of Student :%s\n",name);
	printf("Marks in Physics : %f\n",phy);
	printf("Marks in Chemistry : %f\n",chem);
	printf("Marks in Computer Application : %f\n",ca);
	
	totmarks=phy+chem+ca;
	printf("Total Marks = %f\n",totmarks);
	// casting  int ->float
	per=(totmarks/300)*100;
	printf("Percentage = %f %%\n",per);
	
	//>=80  First
	//>=60 Second
     // third
	 if(per>=80)
	 {
		 printf("First");
	 }
	 else if(per>=60)
	 {
		 printf("Second");
	 } 
	 else
	 {
		 printf("Third");
	 }
	
	 
}


