#include<stdio.h>
//global var 
int n=5;
void array_function(int arr[]){
    for(int i=0;i<n;i++){
    printf("\n%d",arr[i]);
    }
}
void main(){
int arr1[]={23,24,254,26,27};
array_function(arr1);
}
