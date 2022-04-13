#include "stdio.h"
#include "stdlib.h"

int main(void)
{
    int i = 0;
    char c = NULL;

    scanf("%d %*c %c",&i,&c);   //%* 抑制符

    printf("%d %c\n",i,c);

    exit(0);
}