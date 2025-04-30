#include<stdio.h>
void main(){
    int count=0;
    for (int i=0;i<=5;i++){
        for(int j=0;j<=i;j++){
            count++;
            printf(" %d",j);
        }
        //make new line 
        printf("\n");
    }
}  