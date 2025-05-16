#include<stdio.h>
#include<string.h>
int main()
{
    char pin[]="1234";
    char n[10];
    while (1)
    {
        printf("enter pin");
        scanf("%s", n);
        int cmp = strcmp(pin,n);
        if (cmp == 0)
        {
            printf("\npin is valid\n");
            break;
        }
        
        {
            printf("pin is invalid\n");
        }
    }
    return 0;
}        
