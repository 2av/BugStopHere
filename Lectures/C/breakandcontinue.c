Loops in C
==================
1. For Loop
2. While Loop
3. Do while loop

1. For Loop
---------------------------

for(int i=0; i<10; i++)
{
  //body
}


int i=0;   /// start  -> initialization
i<10;   // condition -> if condition true  -> then run the body
i++  //  increment

1 => i++
2  => i+=2
3  => i+=3

---
step 1=> set the value
step 2=> check the condition
step 3=> true-> body 
				step 4= > increment then again step 2

 false=> exits
------------------------

While Loop

while(condition)
{


}

do
{

}while(condition)

------------------------------------
//how to use break  and conitnue in for loops 
#include<stdio.h>
void main(){

	for(int i=1;  i<5; i++)
	{
	
		printf("%d \n",i);
	
	}
	
}









































