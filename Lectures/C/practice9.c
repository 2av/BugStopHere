/*
9. Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
Test Data :
50 50 60
f  s   t

Equilateral - all 3 match
Isosceles - any 2 match
Scalene- any one not match

Expected Output :
This is an isosceles triangle.


50 50 60
f  s   t

f==s  && f==t && s==t  => Equilateral

(f==s && f==t) || (s==t && s==f) -> Isosceles

Scalene


*/
#include<stdio.h>
void main(){
	int f,s,t;
	printf("Enter the value : ");
	scanf("%d %d %d",&f,&s,&t);
	
	// 12 12 15
	//  f  s  t
	
	if(f==s  && f==t)
	{
		printf("Equilateral");
	}
	
	else if( f==s || f==t ||s==t )  
	{
		printf("Isosceles");
	}
	else
	{
		printf("Scalene");
	}
	
}


