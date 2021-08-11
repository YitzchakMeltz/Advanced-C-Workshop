#include<stdio.h>
#include "secondToEdge.h"

int main()
{
    int num1, num2;

    secondToEdge(&num1, &num2);

    printf("Second Largest Number: %d\n", num1);
    printf("Second Smallest Number: %d\n", num2);

    return 0;
}