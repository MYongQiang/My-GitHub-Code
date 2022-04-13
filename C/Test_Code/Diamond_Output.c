#include "stdio.h"
#include "stdlib.h"

#if 0
    *
   ***
  *****
   ***
    *
#endif

int main(void)
{   
    int i = 0, j = 0, k = 0;

    for(i = 1; i <= 3; i++)
    {
        for(k = 2; k >= i; k--)
        {
            printf(" ");
        }

        for(j = 1; j <= 2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i = 2; i >= 1; i--)
    {
        for(k = 2; k >= i; k--)
        {
            printf(" ");
        }
        for(j = 2*i-1; j >= 1; j--)
        {
            printf("*");
        }
        printf("\n"); 
    }


    exit(0);
}