/*Count set bit*/

#include <stdio.h>

int main()
{
      int data,cnt=0;
    printf("Enter a Number");
    scanf("%d",&data);
    
    while(data)
    {
        if((data&1)==1)
        cnt++;
        data=data>>1;
    }
    
    printf("%d",cnt);

    return 0;
}
