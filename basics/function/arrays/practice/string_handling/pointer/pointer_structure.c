#include<stdio.h>
struct pointer_structure
{
    /* data */
    int id;
    char*name;
};
void main(){
    struct pointer_structure st={1,"java"};
    struct pointer_structure *st1;
    st1=&st;
    printf("\nid val is %d",st1->id);
    printf("\nname val is %s",st1->name);
}