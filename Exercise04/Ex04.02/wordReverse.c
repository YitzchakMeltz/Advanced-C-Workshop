#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include "wordReverse.h"

void wordReverse(char *str)
{
    if (*str == '\0')  // stop recursion when NULL terminator is found
        return;

    //create a temp var to hold the first word in the string
    //add a byte for the NULL terminator
    char *token = (char *)malloc(sizeof(char) * (wordSize(str) + 1));

    //create an iterator
    char *tokenIter = token;

    //copy first word to the temp var
    while (*str != ' ' && *str != '\0')
    {
        if (tokenIter != NULL)
            *tokenIter = *str;   //copy each character to token

        ++tokenIter;
        ++str;
    }

    if (tokenIter != NULL)
        *tokenIter = '\0';  //add a NULL terminator the the string created

    wordReverse(++str);

    printStr(token);

    //print space in between the words
    printf(" ");

    free(token);

    return;
}

void printStr(char *str)
{
    while (*str != '\0')
    {
        printf("%c", *str);
        ++str;
    }
}

int wordSize(char *str)
{
    int count = 0;

    while (*str != ' ' && *str!= '\0')
    {
        ++str;
        ++count;
    }

    return count;
}