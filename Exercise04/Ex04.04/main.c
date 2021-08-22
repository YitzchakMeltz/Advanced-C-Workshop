#include<stdio.h>
#include "envp.h"

int main(size_t argc, char* argv[], char* envp[])
{
    /* echo all environment args */
    for (int index = 0; envp[index]; index++)
        printf("Environment variable \"%s\" has the value \"%s\"\n",
                getVarName(envp[index]), getVarValue(envp[index]));

    return 0;
}