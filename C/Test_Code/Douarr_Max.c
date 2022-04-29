#include "stdio.h"
#include "stdlib.h"

#define M   2
#define N   3

//计算二维数组中的最大值
int main(void)
{
    int i = 0, j = 0, Max = 0;
    int arr[M][N] = {0};

#if 1  
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
#endif

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
            }
        }
    }

    printf("Max = %d\n",Max);

    exit(0);
}