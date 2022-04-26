#include "stdio.h"
#include "stdlib.h"

int main(void)
{
    int i = 0;
    int Cnt = 0;
    int Ret = 0;
    int Num = 0;
    int Consult = 0;
    int System_Num = 0; 
    int Head = 0,End = 0,Temp = 0;

    int Arr[128] = {0};

    printf("Please enter a Num:\n");

    scanf("%d",&Num);

    printf("You enter Num is %d\n",Num);

    printf("Please enter System_Num\n");

    Ret = scanf("%d",&System_Num);

    if(Ret == 0)
    {
        printf("Error!\n");
        exit(0);
    }

    printf("You enter System_Num is %d\n",System_Num);

#if 1
    while(Num / System_Num != 0)
    {
        Arr[Cnt++] = Num % System_Num; 
        Num /= System_Num;
    }
     Arr[Cnt++] = Num % System_Num; 
#endif

#if 0
    printf("Cnt = %d\n",Cnt);
    for(i = 0; i < Cnt; i++)
    {
        printf("%d ",Arr[i]);
    }
    printf("\n");
#endif
    Head = Cnt - 1;
    End = 0;

    while(Head > End)
    {
        Temp = Arr[Head];
        Arr[Head] = Arr[End];
        Arr[End] = Temp;
        Head--;
        End++;
    }

    for(i = 0; i < Cnt; i++)
    {
        if(Arr[i] > 9)
        {
            Arr[i] = 'A' + (Arr[i] - 10);
            printf("%c ",Arr[i]);
        }
        else
            printf("%d ",Arr[i]);
    }
    printf("\n");

    exit(0);
}