#include "stdio.h"
#include "stdlib.h"

int Scanf_Arr(const int *arr,const int size)
{
    int i = 0;
    for(i = 0; i < size; i++)
    {
        scanf("%d",&*(arr+i));
    }
    return i;
}

int Print_Arr(const int *arr,const int size)
{
    int i = 0;
    for(i = 0; i < size; i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\n");
    return i;
}

//选择
int main(void)
{
    int i = 0, j = 0, k = 0, temp = 0;
    int arr[5] = {0};

#if 0
    for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        scanf("%d",arr[i]);
    }
#endif

    printf("%d\n",Scanf_Arr(arr,5));

#if 0
    for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
#endif

    printf("%d\n",Print_Arr(arr,5));
    

    for(i = 0; i < sizeof(arr)/sizeof(arr[0]) - 1; i++)
    {   
        k = i;
        for(j = i + 1; j < sizeof(arr)/sizeof(arr[0]); j++) //拿一个数与其他每一个数据进行比较，每比较一次会将满足条件的数据进行调换，比较次数应该为整个数据个数。
        {
            if(arr[k] > arr[j])
            {
                k = j;
            }
        }

        if(k != i)
        {
            temp = arr[k];
            arr[k] = arr[i];
            arr[i] = temp;
        }   
    }

    for(i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    exit(0);
}