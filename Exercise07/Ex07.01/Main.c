
#include <stdio.h>

#define SWAP(t,x,y)     \
    t temp = x;         \
    x = y;              \
    y = temp;

int main(void)
{
    char *x, *y;

    char a, b;

    a = '9';
    b = ';';

    x = &a;
    y = &b;

    SWAP(int *, x, y);

    printf("x: %c\n", *x);
    printf("y: %c\n", *y);

    return 0;
}