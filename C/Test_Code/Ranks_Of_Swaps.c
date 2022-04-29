#include "stdio.h"
#include "stdlib.h"

#define M   2
#define N   3

//二维数组行列互换
int main(void)
{
    int i = 0, j = 0;
    int arr[M][N] = {1,2,3,4,5,6};
    int brr[N][M] = {0};

    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i = 0; i < N; i++)
    {
        for(j = 0;  j < M; j++)
        {
            brr[i][j] = arr[j][i];
        }
    }

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    exit(0);
}