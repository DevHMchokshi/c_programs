#include<stdio.h>
void main(){

    int a;
    double d;
    char c;
    printf("enter int val");
    scanf("%d",&a);
    printf("enter double val");
    scanf("%lf",&d);
    printf("enter string");
    // to get character val from user 
    c=getchar();
    scanf("%C",&c);
    printf("your int val is %d",a);
    printf("\nyour double val is %lf",d);
    printf("\nyour string is %c",c);
}  
