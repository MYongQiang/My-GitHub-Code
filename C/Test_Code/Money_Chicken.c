#include "stdio.h"
#include "stdlib.h"

//百钱买百鸡
//公鸡:5
//母鸡:3
//3小鸡:1
#define MONEY   (100)
//100 / 5 == 20;    取商符号"/" 取余符号"%"
//100 / 3 == 33;
int main(void)
{
    float Cock = 0, Hen = 0, Chick = 0;

    for(Cock = 0; Cock < 20; Cock++)
    {
        for(Hen = 0; Hen < 33; Hen++)
        {
            Chick = 100-(Cock+Hen);
            if(Chick*(1.0/3) + Cock*5 + Hen*3 == 100)
            {
               printf("Cock = %f Hen = %f Chick = %f\n",Cock,Hen,Chick);
            }
        }
    }

    exit(0);
}