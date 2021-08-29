#include "memDump2.h"

int main(void)
{
    printf("Example 1:\n");
    char c = 'A'; /* ASCII value 65 */
    PrintBin(&c, sizeof(c));
    printf("\n");

    printf("Example 2:\n");
    int i = 0x11223344;
    PrintBin(&i, sizeof(i));

    return 0;
}