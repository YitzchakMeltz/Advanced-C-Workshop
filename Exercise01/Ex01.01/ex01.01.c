#include<stdio.h>

int main()
{
    char userInput;

    do
    {
        printf("Enter a character\n");
        scanf_s(" %c", &userInput,1);

        if (userInput == 'q' || userInput == 'Q')
            break;

        printf("The character entered is: %c\n\n", userInput);
    } while (userInput != 'q' && userInput != 'Q');

    return 0;
}