// swap of two numbers using pointer using function
#include<stdio.h>
int swap(int *a,int *b)
{
    int temp;
    temp= *a;
    *a= *b;
    *b=temp;
}

void main(){
    int a=10,b=20;
    printf("before swapping a=%d b=%d",a,b);
    swap(&a,&b);
    printf("\nafter swapping a=%d b=%d",a,b);
}