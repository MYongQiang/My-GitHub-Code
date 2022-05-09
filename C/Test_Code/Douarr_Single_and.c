#include "stdio.h"
#include "stdlib.h"

#define M   2
#define N   3

//二维数组单行求和
int main(void)
{
    int i = 0, j = 0;
    int arr[3][4] = {0};

    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            arr[i][3] += arr[i][j];
            arr[2][j] += arr[i][j];
            arr[2][3] += arr[i][j];
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    exit(0);
}