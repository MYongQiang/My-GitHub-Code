#include "stdio.h"
#include "stdlib.h"

//冒泡
int main(void)
{
    int i = 0, j = 0,temp = 0;
    int arr[5] = {0}; 

    for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    for(i = 0;  i < sizeof(arr)/sizeof(arr[0]) - 1; i++)
    {
        for(j = 0; j < sizeof(arr)/sizeof(arr[0]); j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("%d ",arr[i]);
    }

    exit(0);
}