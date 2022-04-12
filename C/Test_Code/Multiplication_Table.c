#include "stdio.h"
#include "stdlib.h"

//输出九九乘法表
int main(void)
{
    int i = 0, j = 0; 

    for(i = 1; i < 10; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%2dx%d=%2d ",i,j,j*i);
        }
        printf("\n");
    }

    exit(0);
}