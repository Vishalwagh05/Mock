/* Structure Padding */

#include <stdio.h>
struct st{
    int x;
    char y;
    int z;
};

int main()
{
    struct st var;
    printf("%ld ",sizeof(struct st));
    

    return 0;
}

