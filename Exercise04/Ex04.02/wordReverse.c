#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "wordReverse.h"

void wordReverse(char* str)
{
    if (*str == '\0')
        return;

    char* token = (char *)malloc(sizeof(char) * wordSize(str));

    char* tokenIter = token;

    while (*str != ' ' && *str != '\0')
    {
        if (tokenIter != NULL)
            *tokenIter = *str;

        ++tokenIter;
        ++str;
    }

    if (tokenIter != NULL)
        *tokenIter = '\0';

    wordReverse(++str);

    printStr(token);

    printf(" ");

    free(token);

    return;
}

void printStr(char* str)
{
    while (*str != '\0')
    {
        printf("%c", *str);
        ++str;
    }
}

int wordSize(char* str)
{
    int count = 0;

    while (*str != ' ' && *str!= '\0')
    {
        ++str;
        ++count;
    }

    return count;
}