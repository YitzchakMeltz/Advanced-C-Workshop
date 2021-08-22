#include<stdio.h>
#include "programArgs.h"

int main(size_t argc, char *argv[])
{
    printf("The program parameters are:\n");

    for (size_t index = 0; index < argc; ++index)
    {
        printf("[%d] %s\n", index, argv[index]);
    }

    printf("\nThe number of program parameters is: %d\n", argc);

    printf("\nThe number of switches is: %d\n", countSwitches(argc, argv));

    printf("\nThe number of upper case commands is: %d\n", countUpperCase(argc, argv));

    printf("\nThe number of lower case commands is: %d\n", countLowerCase(argc, argv));

    return 0;
}