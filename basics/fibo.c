#include<stdio.h>
void main(){
    int a=1,b=2;
    for(int i=1;1<=8;i++){
        int c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
}      