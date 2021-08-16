#include<stdio.h>
#include "printDiamond.h"

void printDiamond(int base)
{
    //Generate *'s until the base
    for (int index = 0; index < base / 2; index++)
    {
        for (int jindex = 0; jindex < (base / 2) - index; jindex++)
            printf(" ");

        for (int jindex = 0; jindex < 2 * index; jindex++)
            printf("*");

        printf("*\n");
    }

    //Generate the base
    for (int index = 0; index < base; index++)
        printf("*");
    printf("\n");

    //Generate *'s after the base
    for (int index = (base / 2) - 1; index >= 0; index--)
    {
        for (int jindex = 0; jindex < (base / 2) - index; jindex++)
            printf(" ");

        for (int jindex = 0; jindex < 2 * index; jindex++)
            printf("*");

        printf("*\n");
    }
}