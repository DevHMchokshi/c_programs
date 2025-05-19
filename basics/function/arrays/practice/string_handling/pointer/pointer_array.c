#include <stdio.h>
void main(){
    int arr[]={1,2,3,4,5};
    int*ptr;
    ptr=arr;
    for(int i=0;i<5;i++){
         //printf("\n%d",ptr[i]); // array resp
         //printf("\n%d",*(ptr+i)); //airthmetic rep
         printf("\n%p",ptr[i]);
    }
    printf("\nfind address of arr%p",&ptr[0]);

}
