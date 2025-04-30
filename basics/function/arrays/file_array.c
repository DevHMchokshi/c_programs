#include<stdio.h>
int main()
{
    FILE *fptr;
    char str[50];
    fptr=fopen("C:\\file_handling\\array.txt","w");
    printf("enter string");
    scanf("%s",str);
    fprintf(fptr,"%s",str);
    fclose(fptr);
    return 0;
}