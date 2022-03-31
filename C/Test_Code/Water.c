#include "stdio.h"
#include "stdlib.h"

#define WATER   950 
#define QUART   3.0E-23   

//#测试
int main(void)
{
    int Water = 0;

    scanf("%d",&Water);
    printf("Water = %d\r\n",Water);
    
    printf("Number of water molecules = %E\r\n",((Water*WATER)/QUART));

    exit(0);
}