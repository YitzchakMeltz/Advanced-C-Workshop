#include<stdio.h>

int TRUE = 1;
int FALSE = 0;
int LARGEST_SINGLE_DIGIT_NO = 9;

int checkIDValidity(int id)
{
    int sum = 0;
    int singleDigit;

    for (int i = 0; i < 9; i += 2)
    {
        sum += id % 10;

        id = id / 10;

        singleDigit = id % 10;

        id = id / 10;

        singleDigit = singleDigit * 2;

        if (singleDigit > LARGEST_SINGLE_DIGIT_NO)
            singleDigit = singleDigit - 9;

        sum += singleDigit;
    }

    if (sum % 10 == 0)
        return TRUE;

    return FALSE;
}

int main()
{
    if (checkIDValidity(315261222))
        printf("ID Number Is Valid\n");

    else
        printf("ID Number Is Not a Valid ID Number\n");

    return 0;
}