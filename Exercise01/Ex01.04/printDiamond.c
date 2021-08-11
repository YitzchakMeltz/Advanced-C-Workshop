#include<stdio.h>
#include "printDiamond.h"

void printDiamond(int base)
{
    //Generate *'s until the base
    for (int i = 0; i < base / 2; i++)
    {
        for (int j = 0; j < (base / 2) - i; j++)
            printf(" ");

        for (int j = 0; j < 2 * i; j++)
            printf("*");

        printf("*\n");
    }

    //Generate the base
    for (int i = 0; i < base; i++)
        printf("*");
    printf("\n");

    //Generate *'s after the base
    for (int i = (base / 2) - 1; i >= 0; i--)
    {
        for (int j = 0; j < (base / 2) - i; j++)
            printf(" ");

        for (int j = 0; j < 2 * i; j++)
            printf("*");

        printf("*\n");
    }
}