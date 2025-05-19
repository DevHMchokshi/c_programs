#include<stdio.h>
int addition(int *a,int *b){
    int sum= *a+*b;
    return sum;
}
int mul(){

}

void main(){
    int a=10,b=20;
    int ans=addition(&a,&b);
    printf("%d",ans);
}