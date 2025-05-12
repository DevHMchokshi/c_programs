#include<stdio.h>
struct student
{
    /* data */
    int id;
    double d;
    
};
void main(){
    struct student s1;
    struct student s2;
    s1.id=12;
    s2.d=12.12;
    s2.id=23;
    s2.d=34.32;
    printf("\nid=%d",s1.id);
    printf("\nd=%lf",s1.d);
    printf("\nid=%d",s2.id);
    printf("\nd=%lf",s2.d);
}


