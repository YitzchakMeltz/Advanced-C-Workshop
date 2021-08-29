#include "memDump2.h"
#include<string.h>

#pragma warning (disable:5045)  //permision by lecture to ignore warning

const char* bit_rep[16] = 
{
    [0] = "0000",[1] = "0001",[2] = "0010",[3] = "0011",
    [4] = "0100",[5] = "0101",[6] = "0110",[7] = "0111",
    [8] = "1000",[9] = "1001",[10] = "1010",[11] = "1011",
    [12] = "1100",[13] = "1101",[14] = "1110",[15] = "1111",
};

void PrintBin(void* address, size_t addressSize)
{
    unsigned char *addressIter = (unsigned char *)address;
    
    for (size_t index = 0; index < addressSize; ++index)
    {

        char buffer[3];
        sprintf_s(buffer,3, "%x", *addressIter);
        printf("%s %s\n", ConvertHexToBin (buffer[0]), ConvertHexToBin(buffer[1]));
        ++addressIter;
    }
}

const char *ConvertHexToBin(char hexDigit)
{
    return bit_rep[CharToDec(hexDigit)];
}

int CharToDec(char c) 
{ 
    if (c >= '0' && c <= '9') 
        return c - '0';

    if (c >= 'a' && c <= 'f') 
        return c - 'a' + 10;
    
    if (c >= 'A' && c <= 'F') 
        return c - 'A' + 10;

    return -1;
}