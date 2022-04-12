#include "stdio.h"
#include "stdlib.h"

//求出1000以内的水仙花数  如:153 = 1 + 125 + 27; 水仙花数定义:个位数的立方+十位数的立方+百位数的立方为其本身的数据为水仙花数
int main(void)
{
    int Num = 0;
    int a = 0, b = 0, c = 0;

    for(Num = 100 ; Num < 1000; Num++)  //水仙花数为三位数，所以从100开始进行判断
    {
        a = Num % 100 % 10;
        b = Num % 100 / 10;
        c = Num / 100;

        if(a*a*a + b*b*b + c*c*c == Num)
            printf("Num = %d\n",Num);
    }

    exit(0); 
}