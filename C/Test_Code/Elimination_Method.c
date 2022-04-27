#include "stdio.h"
#include "stdlib.h"

//1000 以内的所有质数，删除法求质数
int main(void)
{
    int i = 0, j = 0;
    int arr[1001] = {0};

    for(i = 2; i < 1001; i++)
    {
       for(j = i*2; j < 1001; j+=i) //删除i的整倍数 从最低的整倍数进行删除，每次递增当前判断数据，成倍数进行增加。
       {
           arr[j] = -1;
       } 
    }

    for(i = 2; i < 1001; i++)
    {
        if(arr[i] == 0)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
     
    exit(0);
}