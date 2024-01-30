#include<stdio.h>

struct Point  // user defined data type
{
    int x;
    int y;

};

// netsetd structure or struture withing structiure
 struct Rectangle{
    struct Point topLeft;
    struct Point botRight;
};


void  main(){

struct Rectangle rect={{10,20},{50,60}};
printf("Rect: %d",rect.botRight.x);

    int i1=10;
    struct Point p;
    p.x=10;
    p.y=20;

    struct Point p1={10,20};

   // printf("%d",p.x);

    int i[10]={10,20,30,45,46,6,65};
     struct Point data[10];// Array of structure
     data[0].x=10;
     data[0].y=20;

 
}