#include<stdio.h>
int linearsearch(int arr[],int size,int element){
for(int i=0;i<size;i++)
{
    if(arr[i]==element)
    {
        return i;
    }    
}
return -1;
}
void main(){
int arr[]=(34,32,21,44,55);
int size=sizeof(arr)/sizeof(arr[0]);
int element=3223;
int i=linearsearch(arr,size,element);
if(i=1){
    printf("element found at index %d",i);
}
else
{
    printf("element not found in index");
}

}