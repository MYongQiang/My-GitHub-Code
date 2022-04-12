#include "stdio.h"
#include "stdlib.h"

//从终端中输入数据直到输入为0为止并计算出偶数的个数以及平均值以及奇数的个数和平均值
int main(void)
{
    int Even_Num = 0,Even_Sum = 0;  //能够被2整除的为偶数
    int Odd_Num = 0,Odd_Sum = 0;    //不能被2整除的为奇数

    int Num = 0;

    while(scanf("%d",&Num))
    {
        if(Num == 0)
            break;

        if(Num % 2 == 0)
        {
            Even_Num++;
            Even_Sum+=Num;
        }
        else
        {
            Odd_Num++;
            Odd_Sum+=Num;
        }

    }

    printf("Even_Num = %d\n",Even_Num);
    printf("EvenMean = %d\n",Even_Sum / Even_Num);
    printf("Odd_Num = %d\n",Odd_Num);
    printf("Odd_Mean = %d\n",Odd_Sum / Odd_Num);

    exit(0);
}