//C Program to Generate Multiplication Table
/*
1 *1=1
2 *1  =2
3 *1 =3
4
5
6
7
8
9
10

2   2*1 =2
4   2*2=4
6   2*3=6
8   2*4 =10
10
12
14
16
18
20
*/

/*
start
enter the number
number multiply from 1 to 10
1*1=
1*2
1*3

and print it on same
end
*/

#include<stdio.h>
void main(){
	int number;
	printf("Enter the number to get table: ");
	scanf("%d",&number);
	printf("without for loop\n");
	printf("%d * %d = %d\n",number, 1 , number*1);  // 5 * 1 = 5
	printf("%d * %d = %d\n",number, 2 , number*2);  // 5 * 1 = 5
	printf("%d * %d = %d\n",number, 3 , number*3);  // 5 * 1 = 5
	printf("%d * %d = %d\n",number, 4 , number*4);  // 5 * 1 = 5
	printf("%d * %d = %d\n",number, 5 , number*5);  // 5 * 1 = 5
	printf("%d * %d = %d\n",number, 6 , number*6);  // 5 * 1 = 5
	printf("%d * %d = %d\n",number, 7 , number*7);  // 5 * 1 = 5
	printf("%d * %d = %d\n",number, 8 , number*8);  // 5 * 1 = 5
	printf("%d * %d = %d\n",number, 9 , number*9);  // 5 * 1 = 5
	printf("%d * %d = %d\n",number, 10 , number*10);  // 5 * 1 = 5
	
	printf("with for loop\n");
	for(int i=1 ; i<=10; i++)
	{
		printf("%d * %d = %d\n",number, i , number*i);  // 5 * 1 = 5
	}
}
















