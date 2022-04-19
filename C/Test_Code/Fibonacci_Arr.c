#include "stdio.h"
#include "stdlib.h"

//斐波那契Arr实现   0 1 1 2 3 5 8
int main(void)
{
    int i = 0;
    int arr[20] = {0,1};

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

    exit(0); 
}