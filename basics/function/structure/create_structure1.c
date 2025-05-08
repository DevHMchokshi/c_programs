#include<stdio.h>
struct student1
{
    /* data */
    int id;
    char *name;
};
void main(){
    struct student1 s1={12,"test"};
    struct student1 s2={13,"test123"};
    struct student1 s3={.id=14,.name="test1234"};
    printf("s1 is %d\n%s",s1.id,s1.name);
    printf("\ns2 is %d\n%s",s2.id,s2.name);
    printf("\ns3 is %d\n%s",s3.id,s3.name);   

}