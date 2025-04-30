#include<stdio.h>
void main()
{
    int a=120,b=2220,c=30;
    if(a>=b && a>=c){
        printf("a is max %d",a);
}
else if(b>=a && b>=c){
    printf(" b is max %d",b);
}
else
{
    printf("c is max %d",c);
}

}