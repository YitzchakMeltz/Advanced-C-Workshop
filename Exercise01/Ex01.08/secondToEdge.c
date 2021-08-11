#include<stdio.h>
#include "secondToEdge.h"

int FUNCTION_ENDED_SUCCESFULLY = 1;
int NOT_ENOUGH_DATA_ENTERED = -1;

int readNumber()
{
    int userInput;

    scanf_s("%d", &userInput);

    return userInput;
}

int secondToEdge(int* num1, int* num2)
{
    int userInput;

    int largest;
    int secondLargest;
    int smallest;
    int secondSmallest;

    userInput = readNumber();

    //exception if no numbers are entered
    if (userInput == 0)
    {
        printf("Program needs at least 2 numbers to run\n");
        return NOT_ENOUGH_DATA_ENTERED;
    }

    //set all variables to user input
    largest = secondLargest = smallest = secondSmallest = userInput;

    userInput = readNumber();

    //exception if no numbers are entered
    if (userInput == 0)
    {
        printf("Program needs at least 2 numbers to run\n");
        return NOT_ENOUGH_DATA_ENTERED;
    }

    largest = max(userInput, largest);
    secondLargest = min(userInput, secondLargest);

    smallest = secondLargest;
    secondSmallest = largest;

    do
    {
        userInput = readNumber();

        // ends user input
        if (userInput == 0)
        {
            *num1 = secondLargest;
            *num2 = secondSmallest;
            return FUNCTION_ENDED_SUCCESFULLY;
        }

        // useInput is the smallest number
        if (userInput < smallest)
        {
            secondSmallest = smallest;
            smallest = userInput;
        }

        // useInput is the second to smallest number
        if (userInput < secondSmallest && userInput > smallest)
        {
            secondSmallest = userInput;
        }

        // useInput is the largest number
        if (userInput > largest)
        {
            secondLargest = largest;
            largest = userInput;
        }

        // useInput is the second to largest number
        if (userInput<largest && userInput>secondLargest)
        {
            secondLargest = userInput;
        }

    } while (userInput != 0);

    // set the references to the two numbers to be outputed
    *num1 = secondLargest;
    *num2 = secondSmallest;

    return FUNCTION_ENDED_SUCCESFULLY;
}

int max(int num1, int num2)
{
    if (num1 > num2)
        return num1;

    return num2;
}

int min(int num1, int num2)
{
    if (num1 < num2)
        return num1;

    return num2;
}