//implement structure data in function
#include<stdio.h>
// function define 
struct Student getinfo();
struct Student 
{
    /* data */
    int id;
    char name [20];
};
void main (){
    struct Student s;
    s=getinfo();
    printf("%d%s",s.id,s.name);

}
struct Student getinfo(){
   struct Student st ;
   printf("enter id and name");
   scanf("\n%d\n%s",&st.id,&st.name);
   return st; 
}