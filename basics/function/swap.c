#include<stdio.h>
void swap(int num1,int num2)
{
int temp;
temp=num1;
num1=num2;
num2=temp;
printf("swap num1=%d,num2=%d",num1,num2);  
}
void main(){
int a,b;
printf("enter the val");
scanf("%d %d",&a,&b);
swap(a,b);    
}