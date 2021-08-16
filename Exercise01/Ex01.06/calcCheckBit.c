#include "calcCheckBit.h"

int LARGEST_SINGLE_DIGIT_NO = 9;
int LARGEST_DOUBLE_DIGIT_NO = 99;

int calcCheckBit(int id)
{
    int sumOfIdDigits = sumOfNumbers(id);

    int remainder = sumOfIdDigits % 10;

    // calculate what number is needed to make sum % 10 == 0
    return (10 - remainder);
}

int sumOfNumbers(int num)
{
    int sum = 0;

    int length = numLength(num);

    int singleDigit;

    for (int index = 0; index < length; index++)
    {
        singleDigit = num % 10;

        // Double the number for every even number
        if (index % 2 == 0)
        {
            singleDigit = singleDigit * 2;

            // Combine digits if number is a 2 digit number
            if (singleDigit > LARGEST_SINGLE_DIGIT_NO)
                singleDigit = combineDigits(singleDigit);
        }

        sum += singleDigit;

        // Drop the farmost right digit
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