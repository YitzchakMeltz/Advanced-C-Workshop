#include "ValidateId.h"

int TRUE = 1;
int FALSE = 0;
int LARGEST_SINGLE_DIGIT_NO = 9;
int LENGTH_OF_ID = 9;

int checkIDValidity(int id)
{
    int sum = 0;
    int singleDigit;

    // returns false if the ID inputed is not 9 digits
    if (numLength(id) != LENGTH_OF_ID)
        return FALSE;

    for (int index = 0; index < 9; index += 2)
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

int numLength(int num)
{
    int count = 1;

    num = num / 10;

    while (num != 0)
    {
        num = num / 10;
        count++;
    }

    return count;
}