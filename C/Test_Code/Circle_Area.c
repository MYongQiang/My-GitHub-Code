#include "stdio.h"
#include "stdlib.h"

#define PI (3.14)

//从1开始 直到100为止 r
int main(void)
{
    float r = 1;
    while(PI*(r*r) <= 100)
    {
        printf("r = %d\n",r);
        printf("%f\n",PI*(r*r));
        r++;
    }    
    exit(0);
}