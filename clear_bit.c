
/* Clear bit postion*/

#include <stdio.h>

int main()
{
    int data,pos;
    printf("Enter a Number and position :");
    scanf("%d%d",&data,&pos);
    
    data=data&(~(1<<pos));
    printf("%d",data);
    return 0;
}

