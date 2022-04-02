#include "stdio.h"
#include "stdlib.h"
#include "math.h"

//#测试
int main(void)
{
    float a = 0, b = 0, c = 0;
    float h = 0, s = 0;

    scanf("%f %f %f",&a,&b,&c);
    
    if((a+b <= c) || (a+c <= b) || (b+c <= a))  //逻辑或
    {
        exit(-1);
    }
    else
    {
        h = (1.0/2.0)*(a+b+c);
        printf("h = %f\n",h);
        s = sqrt(h*(h-a)*(h-b)*(h-c));
        printf("s = %f\n",s);
    }
    

    exit(0);
}