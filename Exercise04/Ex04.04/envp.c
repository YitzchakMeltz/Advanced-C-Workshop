#include<stdio.h>
#include "envp.h"

char* getVarName(char *str)
{
    size_t varNameSize = 0;

    char *inputIter = str;

    while (*inputIter != '=')
    {
        ++varNameSize;
        ++inputIter;
    }

    varNameSize++;

    char *varName = (char*)malloc(sizeof(char) * varNameSize);

    inputIter = str;
    char *resultIter = varName;

    while (*inputIter != '=')
    {
        *resultIter = *inputIter;

        ++inputIter;
        ++resultIter;
    }

    *resultIter = '\0';

    return varName;
}

char* getVarValue(char *str)
{
    char *inputIter = str;

    while (*inputIter != '=')
    {
        ++inputIter;
    }

    ++inputIter;

    return inputIter;
}