#include<stdio.h>
//global val
int n=5;
void array_function(int arr[]){
    for(int i=0;i<n;i++){
    printf("\n%d",arr[i]);
    }
}
void main(){
int arr1[]={23,24,255,27,28};
array_function(arr1);
} 