#include "stdio.h"
#include "stdlib.h"

//#测试1
int main(void)
{
    unsigned char State = 0x06;
    printf("%x\n",State &= 1 << 0);
//    while(!(State &= 1 << 0)){};
    printf("Hello world!\n");
    printf("你好世界\n");
    exit(0);
}


