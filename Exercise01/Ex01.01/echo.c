#include<stdio.h>
#include "echo.h"

void echo(void)
{
    char userInput;

    do
    {
        printf("Enter a character\n");
        scanf_s(" %c", &userInput, 1);

        if (userInput == 'q' || userInput == 'Q')
            break;

        printf("The character entered is: %c\n\n", userInput);
    } while (userInput != 'q' && userInput != 'Q');
}