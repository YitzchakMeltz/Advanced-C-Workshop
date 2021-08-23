#include "programArgs.h"

#define TRUE 1
#define FALSE 0

#define SMALLEST_LOWER_CASE_LETTER 97
#define LARGEST_LOWER_CASE_LETTER 122
#define SMALLEST_UPPER_CASE_LETTER 65
#define LARGEST_UPPER_CASE_LETTER 90

size_t countSwitches(size_t argc, char *argv[])
{
    size_t counter = 0;

    for (size_t index = 0; index < argc; ++index)
    {
        if (argv[index][0] == '-' || (wordSize(argv[index]) > 1 && argv[index][0] == '/' && argv[index][1] == 's'))
            counter++;
    }

    return counter;
}

size_t checkUpperCase(char *str)
{
    while (*str != '\0')
    {
        if (*str>=SMALLEST_LOWER_CASE_LETTER && *str<=LARGEST_LOWER_CASE_LETTER)
            return FALSE;

        ++str;
    }

    return TRUE;
}

size_t checkLowerCase(char *str)
{
    while (*str != '\0')
    {
        if (*str>=SMALLEST_UPPER_CASE_LETTER && *str<=LARGEST_UPPER_CASE_LETTER)
            return FALSE;

        ++str;
    }

    return TRUE;
}

size_t countUpperCase(size_t argc, char *argv[])
{
    size_t counter = 0;

    char *cmd;

    for (size_t index = 0; index < argc; ++index)
    {
        cmd = &argv[index][0];

        if (wordSize(argv[index]) > 1 && argv[index][0] == '/' && argv[index][1] == 's')
            cmd += 2;
        
        // check for case where cmd is '/s-SOME_COMMAND'
        else if(*cmd == '-')
            while (*cmd == '-')
                ++cmd;

        if (checkUpperCase(cmd))
            counter++;
    }

    return counter;
}

size_t countLowerCase(size_t argc, char *argv[])
{
    size_t counter = 0;

    char *cmd;

    for (size_t index = 0; index < argc; ++index)
    {
        cmd = &argv[index][0];

        if (wordSize(argv[index]) > 1 && argv[index][0] == '/' && argv[index][1] == 's')
            cmd += 2;

        // check for case where cmd is '/s-SOME_COMMAND'
        else if (*cmd == '-')
            while (*cmd == '-')
                ++cmd;

        if (checkLowerCase(cmd))
            counter++;
    }

    return counter;
}

size_t wordSize(char *str)
{
    int count = 0;

    while (*str != ' ' && *str != '\0')
    {
        ++str;
        ++count;
    }

    return count;
}