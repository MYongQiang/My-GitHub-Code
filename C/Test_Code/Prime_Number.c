#include "stdio.h"
#include "stdlib.h"

//1000 within all prime
int main(void)
{
    int i = 0, j = 0;
    int Num = 0;

    for(i = 2; i < 1000; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                Num += j;
 //               printf("i = %d j = %d Num = %d\n", i,j,Num);
            }
        }
        if(Num == (1+i))
        {
             printf("%d ",i);
        }
        Num = 0;
    }

    exit(0);
}