#include "stdio.h"
#include "stdlib.h"

//斐波那契Arr实现，并进行倒叙输出   
//0 1 1 2 3 5 8
int main(void)
{
    int i = 0;
    int arr[20] = {0,1};

    int x = 0, y = 0, temp = 0; 

    for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("%d %d ",arr[0],arr[1]);
    for(i = 2; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
        printf("%d ",arr[i]);
    }

    x = 0;
    y = sizeof(arr)/sizeof(arr[0]) - 1;

    printf("x = %d arr[x] = %d\n",x,arr[x]);
    printf("y = %d arr[y] = %d\n",y,arr[y]);

    while(x < y)    //这里是否不能填写(x != y) 为什么会出现错误
    {
        temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
        x++;
        y--;
    }

    for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    exit(0); 
}