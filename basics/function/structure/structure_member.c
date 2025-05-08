#include<stdio.h>
struct Structure_member
{
    int id;
    double d;
    /* data */
}s1,s2;
void main(){
    printf("enter int and double val");
    scanf("%d",&s1.id);
    scanf("%lf",&s2.d);

    printf("\n%d\n%f",s1.id,s2.d);
}