#include<stdio.h>
#include "reversePrint.h"
void reversePrint()
{
    int userInput;

    scanf_s("%d", &userInput);

    if (userInput == 0)
        return;

    reversePrint();

    printf("%d ",userInput);

    return;
}