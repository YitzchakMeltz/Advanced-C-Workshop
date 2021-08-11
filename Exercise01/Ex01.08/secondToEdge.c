#include<stdio.h>
#include "secondToEdge.h"

int readNumber()
{
    int userInput;

    scanf_s("%d", &userInput);

    return userInput;
}

void secondToEdge()
{
    int userInput;

    int largest;
    int secondLargest;
    int smallest;
    int secondSmallest;

    do
    {
        userInput = readNumber();

        if (userInput == 0)
            break;


    }
}