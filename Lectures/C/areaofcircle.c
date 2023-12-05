//Calculate area of circle  (pi=3.14 * r * r )
//psudo code
/*
start
define 3 varibale PI,R,Area;
set the value of PI=3.14
display a message: Please enter the Radius
read the value from user
calucate the circle by PI*r*r;
set the value
Display the circle of area
end
*/

#include<stdio.h>
void main(){
	const float PI=3.14;  // constant variable
	float R,Circle;
	printf("Please enter the Radius:");
	scanf("%f",&R);
	Circle = PI*R*R;
	printf("Area of circle: %f",Circle);
}




