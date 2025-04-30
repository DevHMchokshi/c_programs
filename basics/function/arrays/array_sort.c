//bubbleshort algorithm
// sort array in ascending order
#include<stdio.h>
void main(){
int size;
printf("enter array size");
scanf("%d",&size);
// create array
int arr[size];
printf("enter elements");
for(int i=0;i<size;i++){
scanf("%d",&arr[i]);    
}
// print array
for(int i=0;i<size;i++){
    printf("\n%d",arr[i]);  
}
// bubblesort algorithm
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
// print elements
for(int i=0;i<size;i++){
    print("\n%d",arr[i]);
}
}