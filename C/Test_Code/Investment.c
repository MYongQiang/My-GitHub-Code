#include "stdio.h"
#include "stdlib.h"


#define INTEREST_RATE_A (0.1)   //A的年利率
#define INTEREST_RATE_B (0.05)  //B的年利率

//A以10%的单利息进行投资100美元，B以5%的复合利息机型投资100美元。计算多少年后B超过A的总投资额
int main(void)
{
    int Year = 0;
    float PRINCIPAL_A = 100;     //A的投资金额
    float PRINCIPAL_B = 100;      //B的投资金额
    float Interest_A = 0, Interest_b = 0;
    float Rental_A = 100, Rental_B = 100;

    Rental_B = PRINCIPAL_B;
    //A:
    //  1 -> 100 + (100 * 0.1);
    //  2 -> 100 + (100 * 0.1) + (100 * 0.1);

    //B:
    //  1 -> 100 + (100 * 0.05);
    //  2 -> 100 + ((100 + 100 * 0.05) * 0.05);

#if 0
    while(Rental_B <= Rental_A)
    {
        PRINCIPAL_A += (PRINCIPAL_A * INTEREST_RATE_A);     //错误示范代码这里的被乘数因为和积使用的是同一个变量导致被乘数被重新覆盖写导致后续相乘相当于积作为了被乘数导致数据被无限放大导致出错
        Rental_A = PRINCIPAL_A;                             //这里应该将积使用另一个变量进行存储原因是单利息本金应该保持不变。复合利息才需要对本金(被乘数进行更新迭代)            

        PRINCIPAL_B += (Rental_B * INTEREST_RATE_B);
        Rental_B = PRINCIPAL_B;

        printf("Rental_A = %f\r\n",Rental_A);
        printf("Rental_B = %f\r\n",Rental_B);

        Year++; 
    }
    printf("Year = %d\r\n",Year);
#endif

#if 1
    while(Rental_A >= Rental_B)
    {
        Rental_A += (PRINCIPAL_A * INTEREST_RATE_A);    //进行+=操作这里的被乘数不能和积为一个变量

        PRINCIPAL_B += (Rental_B * INTEREST_RATE_B);
        Rental_B = PRINCIPAL_B;

        Year++;
        printf("PRINCIPAL_A * INTEREST_RATE_A = %f\r\n",(PRINCIPAL_A * INTEREST_RATE_A));
        printf("Rental_A = %f\r\n",Rental_A);
        printf("Rental_B = %f\r\n",Rental_B);

    }
    printf("Year == %d\r\n",Year);
#endif

    exit(0);
}