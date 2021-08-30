#include "memDump.h"

int main(void)
{
    char c = 'A';
    PrintHex(&c, sizeof(c));

    int i = 0x11223344;
    PrintHex(&i, sizeof(i));

    printf("Hello\n");
    int i2 = 3;
    PrintHex(&i2, 1);

    return 0;
}