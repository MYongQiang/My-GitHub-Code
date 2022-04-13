#include "stdio.h"
#include "stdlib.h"

//从终端输入数字直到输入q为止计算所输入数字的和
int main(void)
{
    int Num = 0;
    int Sum = 0;

    while(scanf("%d",&Num) == 1)
    {
        Sum += Num;
    }
    printf("Sum = %d\n",Sum);

    exit(0);
}