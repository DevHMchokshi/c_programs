#include<stdio.h>
#include<string.h>
struct student
{
    /* data */
    int id;
    double d;
    char *c;
    char c1[10];
};
void main(){
    struct student s1;
    struct student s2;
    s1.id=12;
    s1.d=12.12;
    s2.id=23;
    s2.d=34.32;
    s1.c="test";
    s2.c="test1";
    strcpy(s1.c1,"hello");
    strcpy(s2.c1,"helloword");
    printf("\nid is %d \n%d \n%s",s1.id,s2.id,s1.c,s1.c1);
    printf("\ndouble data %lf\n%lf \n%s \n%s",s1.d,s2.d,s2.c,s2.c1);


}