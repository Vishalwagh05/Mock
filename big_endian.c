/*big endian little endian*/

#include <stdio.h>

int main()
{
    int data=0x1234,result;
    
    result=((data&0x00ff)<<8)|((data&0xff00)>>8);
    printf("%x",result);

    return 0;
}

