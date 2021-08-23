#include<stdio.h>
#include "fibonacci.h"

int main(size_t argc, char* argv[])
{
    int userInput = 0;

    while (userInput != -1)
    {
        printf("Please enter a number from 0-100\nEnter -1 to exit\n");

        scanf_s("%d", &userInput);

        if (userInput == -1)
            break;

        if (userInput > 100 || userInput<-1)
        {
            printf("The number is out of bounds\n\n");
            continue;
        }

        printf("\n%lld is the %dth element in the Fibonacci series\n\n", getNthFibonacci(userInput), userInput);
    } 

    return 0;
}