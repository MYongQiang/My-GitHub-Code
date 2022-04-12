#include "stdio.h"
#include "stdlib.h"

//Fibonacci的前20项 0 1 1 2 3 5 8
int main(void)
{
    int a = 0,b = 1,c = 0;

    int i = 18;

    printf("%d %d ",a,b);

    while(i--)
    {
        c = a + b;
        a = b;
        b = c;

        printf("%d ",c);
    }


    exit(0);
}