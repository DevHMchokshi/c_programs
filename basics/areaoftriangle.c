#include<stdio.h>
void main()
{
    double ans,base,height,half;
    printf("enter base");
    scanf("%lf",&base);
    printf("enter height");
    scanf("%lf",&height);
    printf("enter half ");
    scanf("%lf",&half);
    ans=base*height*half;
    printf("\nanswer is %lf",ans);
}