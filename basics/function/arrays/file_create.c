// how to create file
#include<stdio.h>
void main(){
FILE *fptr;
fptr=fopen("C:\\file_handling\\dev.txt","w");
// add content
int i;
printf("enter file data");
scanf("%d",&i);
fprintf(fptr,"%d",i);
fclose(fptr);
}