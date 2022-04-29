#include "stdio.h"
#include "stdlib.h"

#define M   2
#define N   3

//计算二维数组中的最大值
int main(void)
{
    int i = 0, j = 0, Max = 0, Line = 0,List = 0;
    int arr[M][N] = {0};

    int *p = &arr[i][j];

#if 1  
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
#endif

    for(i = 0; i < 6; i++)
    {
        printf("%d ",*(p++));
    }
    printf("\n");

#if 0
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    Max = arr[0][0];
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(arr[i][j] >= Max)
            {
                Max = arr[i][j];
                Line = i;
                List = j;
            }
        }
    }

    printf("Max = arr[%d][%d] - > %d\n",i,j,Max);

#endif

    exit(0);
}