#include "stdio.h"
#include "stdlib.h"

#define M   2
#define N   3

int main(void)
{
    int i = 0, j = 0;
//    int arr[M][N] = {1,2,3,4,5,6};
    int arr[M][N] = {{1},{4,5}};

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
            printf("%p --> %d ",&arr[i][j],arr[i][j]);
        }
        printf("\n");
    }


    exit(0);
}