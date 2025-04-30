#include<stdio.h>
void main(){
// userdefined array
int n;
printf("enter array size");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
printf("enter array elements");
scanf("%d",&arr[i]);
}  
//data diplay
for(int i=0;i<n;i++){
printf("\n%d",arr[i]);  
}
}