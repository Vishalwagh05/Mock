
/* Even Odd */

#include <stdio.h>

int main()
{
    int data;
    printf("enter a number :");
    scanf("%d",&data);
    
    if(data&1)
    printf("given no is odd\n");
    else
    printf("given no is even\n");

    return 0;
}

