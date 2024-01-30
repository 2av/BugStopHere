#include<stdio.h>

struct Point{
 int i;
 int j;
 int k;

};

union Price{
    int i;
    int j;
    int k;


};



void main(){
    struct Point p;
    p.i=10;
    p.j=20;
    p.k=30;


    union Price p1;
    //p1.i=10;
    p1.j=20;
    //p1.k=30;


     
    printf("Size of structure: %d \n",sizeof(struct Point));
    printf("Size of union: %d \n",sizeof(union Price));
    printf("struct: %d %d %d \n",p.i, p.j,  p.k);
    printf("union: %d %d %d \n",p1.i, p1.j,  p1.k);

}