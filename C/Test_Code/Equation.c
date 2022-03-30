#include "math.h"
#include "stdio.h"
#include "stdlib.h"

//a*x*x + b*x + c = 0; 求解
//b*b-4*a*c >= 0 有解
//x1 = -b+sqrt(b*b-4*a*c)/2*a;
//x2 = -b-sqrt(b*b-4*a*c)/2*a;

//#测试
int main(void)
{
    float a = 0, b = 0, c = 0;
    float m = 0, n = 0;

    scanf("%f %f %f",&a,&b,&c);

    if(b*b-4.0*a*c < 0)
    {
        printf("Error!\r\n");
        exit(-1);
    }
    else
    {
        m = -b/2.0*a;
        n = (sqrt(b*b-4.0*a*c))/2.0*a;
        printf("x1 = %f\r\n",m-n);
        printf("x2 = %f\r\n",m+n);
    }

    exit(0);
}
