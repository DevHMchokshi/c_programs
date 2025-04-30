#include<stdio.h>
void main(){
FILE *fptr;
fptr=fopen("C:\\file_handling\\dev.txt","r");
if(fptr==NULL){
    printf("file not exist");
} 
int i;
fscanf(fptr,"%d",&i);
printf("file content is %d",i);
}
// create array of numbers and store it in file