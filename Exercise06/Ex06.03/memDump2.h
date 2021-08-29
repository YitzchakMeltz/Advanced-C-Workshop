#ifndef MEM_DUMP2_H
#define MEM_DUMP2_H

#include<stdio.h>

void PrintBin(void* address, size_t addressSize);

const char *ConvertHexToBin(char hexDigit);

int CharToDec(char c);

#endif