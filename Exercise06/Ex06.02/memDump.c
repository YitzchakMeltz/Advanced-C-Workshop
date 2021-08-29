#include "memDump.h"

#pragma warning (disable:5045) // the instructor gave me permission to ignore this warning 

void PrintHex(void *address, size_t addressSize)
{
    unsigned char* addressIter = (unsigned char*)address;

    for (size_t index = 0; index < addressSize; ++index)
    {
        printf("0x%x\n", *addressIter);
        ++addressIter;
    }
}