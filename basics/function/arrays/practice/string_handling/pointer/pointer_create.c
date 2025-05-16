#include<stdio.h>
void main(){
    int i=0;
    int*ptr;
     ptr=&i;   // pointer hold val of int ival
    printf("\naddress of i is %p",*ptr); //pointer variable  address
    printf("\naddress of int i %p",&i);  // int variable address
    printf("\nval of pointer var %d",*ptr); // variable address
}