#include "stdio.h"
#include "stdlib.h"

#define M   2
#define N   3
#define K   2

//矩阵
int main(void)
{
    int i = 0, j = 0, k = 0;
    int douarr[M][N] = {1,2,3,4,5,6};
    int douarr_2[N][M] = {1,2,3,4,5,6};
    int douarr_3[M][K] = {0};

    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%d ",douarr[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < N; i++)
    {
        for(j = 0 ; j < M; j++)
        {
            printf("%d ",douarr_2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
        {
            for(k = 0; k < K; k++)
            {
               douarr_3[i][k] += douarr[i][j] * douarr_2[j][k]; 
            }
        }
    }

    for(i = 0; i < M; i++)
    {
        for(j = 0; j < K; j++)
        {
            printf("%d ",douarr_3[i][j]);
        }
        printf("\n");
    }
    
    exit(0);
}