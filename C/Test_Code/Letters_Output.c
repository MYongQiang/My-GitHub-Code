#include "stdio.h"
#include "stdlib.h"

#if 0
ABCDEF
BCDEF
CDEF
DEF
EF
F
#endif

int main(void)
{
    char i = 'A';
    char j;

    for(;i <= 'F'; i++)
    {
        for(j = i; j <= 'F'; j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }

    exit(0);
}