#include "envp.h"

size_t isSubstr(char *str, char *subStr)
{
    char *strIter = str;
    char *subStrIter = subStr;

    while (*subStrIter != '\0')
    {
        if (*strIter != *subStrIter)
            return FALSE;

        ++strIter;
        ++subStrIter;
    }

    return TRUE;
}