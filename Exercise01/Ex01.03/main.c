#include<stdio.h>
#include "myStrLen.h"

int main()
{

    char str[80];

    gets(str);

    printf("%d", myStrLen(str));

    return 0;
}