#include<stdio.h>
#include<stdlib.h>
void main(){

   int n;
   printf("enter array size");
   scanf("%d",&n);
   int *ptr;
//    allocate run time memory to pointer
ptr=(int*)malloc(n* sizeof(int));
printf("enter array elements");
for(int i=0;i<n;i++){
    scanf("%d",&ptr[i]);
}
for(int i=0;i<n;i++)
{
for(int i=0;i<n;i++)
{
printf("\n%d",ptr[i]);        
}
free(ptr);
}
}