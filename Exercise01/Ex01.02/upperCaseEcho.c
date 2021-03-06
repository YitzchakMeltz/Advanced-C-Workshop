#include<stdio.h>
#include "upperCaseEcho.h"

char userInput;
int SMALLEST_LOWER_CASE_LETTER = 97;
int LARGEST_LOWER_CASE_LETTER = 122;
int UPPER_AND_LOWER_DIFFERENCE = 32;

void upperCaseEcho()
{
    do
    {
        printf("Enter a character\n");
        scanf_s(" %c", &userInput, 1);

        if (userInput == 'q' || userInput == 'Q')
            break;

        if (userInput <= LARGEST_LOWER_CASE_LETTER && userInput >= SMALLEST_LOWER_CASE_LETTER)
            userInput -= UPPER_AND_LOWER_DIFFERENCE;

        printf("The character entered is: %c\n\n", userInput);
    } while (userInput != 'q' && userInput != 'Q');
}