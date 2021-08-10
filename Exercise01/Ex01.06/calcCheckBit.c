#include "calcCheckBit.h"

int LARGEST_SINGLE_DIGIT_NO = 9;
int LARGEST_DOUBLE_DIGIT_NO = 99;

int calcCheckBit(int id)
{
    int sumOfIdDigits = sumOfNumbers(id);

    int remainder = sumOfIdDigits % 10;

    return (10 - remainder);
}

int sumOfNumbers(int num)
{
    int sum = 0;

    int length = numLength(num);

    int singleDigit;

    for (int i = 0; i < length; i++)
    {
        singleDigit = num % 10;

        if (i % 2 == 0)
        {
            singleDigit = singleDigit * 2;

            if (singleDigit > LARGEST_SINGLE_DIGIT_NO)
                singleDigit = combineDigits(singleDigit);
        }

        sum += singleDigit;
        num = num / 10;
    }

    return sum;
}

int combineDigits(int num)
{
    return num - 9;
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