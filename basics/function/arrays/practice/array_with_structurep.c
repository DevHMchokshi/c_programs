#include<stdio.h>
struct array_structure
{
    int id;
    double d;    /* data */
}s1[5];
void  main(){
    printf("enter id and double data"); 
    for(int i=0;i<5;i++){
    scanf("%d",&s1[i].id);
    scanf("%d",&s1[i].d);    
    }
 printf("your elements");
 for(int i=0;i<5;i++){
 printf("\n%d,\n%lf",s1[i].id,s1[i].d);   
 }
}