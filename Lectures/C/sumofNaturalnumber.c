#include<stdio.h>
int sum(int i)
{

    if(i==0)
    {
        return 0;
    }
    else{
        return i+sum(i-1);
    }
}


void printArray(int *ptr,int size){
        for(int i=0; i<size; i++)
        {
            printf("%d ",*(ptr+i));
        }
}
void main(){
     
   // int tot=sum(5);     
    //printf("%d",tot);

int i[2]={1,2};
int j[5]={1,2,3,4,5};
int k[10]={1,2,3,4,5,6,7,3,8,9};
printArray(k,10);
}