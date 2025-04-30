#include<stdio.h>
void main(){
// create array
int arr[2][3]={{1,2,3},{4,5,6}};
// display array
for(int i=0;i<2;i++){
// nested forloop
for(int j=0;j<3;j++){
printf(" %d",arr[i][j]);    
}
printf("\n");
}    
}