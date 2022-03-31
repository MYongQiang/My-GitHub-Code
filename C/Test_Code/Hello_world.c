#include "stdio.h"
#include "stdlib.h"

//#测试
int main(void)
{
    unsigned char State = 0x06;
    printf("%x\n",State &= 1 << 0);
//    while(!(State &= 1 << 0)){};
    printf("Hello world!\n");
    
    exit(0);
}
