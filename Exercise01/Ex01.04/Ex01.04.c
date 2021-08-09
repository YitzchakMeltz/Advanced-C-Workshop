#include<stdio.h>

void printDiamond(int base)
{
    for (int i = 0; i < base / 2; i++)
    {
        for (int j = 0; j < (base / 2) - i; j++)
            printf(" ");

        for (int j = 0; j < 2*i; j++)
            printf("*");

        printf("*\n");
    }

    for (int i = 0; i < base; i++)
        printf("*");
    printf("\n");

    for (int i = (base / 2) - 1 ; i >= 0; i--)
    {
        for (int j = 0; j < (base / 2) - i; j++)
            printf(" ");

        for (int j = 0; j < 2 * i; j++)
            printf("*");

        printf("*\n");
    }
}

int main()
{
    printDiamond(97);

    return 0;
}