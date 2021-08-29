#include "memDump.h"

int main(void)
{
    char c = 'A';
    PrintHex(&c, sizeof(c));

    int i = 0x11223344;
    PrintHex(&i, sizeof(i));

    return 0;
}