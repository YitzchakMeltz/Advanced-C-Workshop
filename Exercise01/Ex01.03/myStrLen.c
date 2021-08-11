#include "myStrLen.h"

int NULL_CHARACTER = 0;

int myStrLen(const char* str)
{
    char* iter = str;

    int counter;

    for (counter = 0; *iter != NULL_CHARACTER; counter++)
        iter++;

    return counter;
}