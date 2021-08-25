#include<stdio.h>
#include "complexCalculator.h"

int mainCalculator()
{
    Number n1, n2, sol;

    Number *num1, *num2, *solution;

    num1 = &n1;
    num2 = &n2;
    solution = &sol;

    char mathOp = '\0';

    numberInput(num1);

    mathOp = inputMathOp();

    while (mathOp != EXIT)
    {
        numberInput(num2);

        calculate(num1, num2,solution, mathOp);

        if ((*solution).isReal)
            printf("= %lf\n\n", (*solution).num.realNumber);
        else
            printf("= (%f) + (%f)i\n\n", (*solution).num.complexNumber.realPart, (*solution).num.complexNumber.complexPart);

        *num1 = *solution;

        mathOp = inputMathOp();
    }

    printf("Goodbye!\n");

    return 0;
}

void calculate(Number *num1, Number *num2, Number *solution, char mathOp)
{
    switch (mathOp)
    {
    case '+':add(num1, num2, solution);;
        break;
    case '-':sub(num1, num2, solution);
        break;
    case '/': div(num1, num2, solution);
        break;
    case '*':mult(num1, num2, solution);
        break;
    }
}

void add(Number *num1, Number *num2, Number *solution)
{
    //both numbers are real
    if ((*num1).isReal && (*num2).isReal)
    {
        (*solution).isReal = TRUE;
        (*solution).num.realNumber = (*num1).num.realNumber + (*num2).num.realNumber;
        return;
    }

    (*solution).isReal = FALSE;

    //both numbers are complex
    if (!(*num1).isReal && !(*num2).isReal)
    {
        (*solution).num.complexNumber.realPart = (*num1).num.complexNumber.realPart + (*num2).num.complexNumber.realPart;
        (*solution).num.complexNumber.complexPart = (*num1).num.complexNumber.complexPart + (*num2).num.complexNumber.complexPart;
    }

    //first number real, second is complex
    if ((*num1).isReal && !(*num2).isReal)
    {
        (*solution).num.complexNumber.realPart = (float)(*num1).num.realNumber + (*num2).num.complexNumber.realPart;
        (*solution).num.complexNumber.complexPart = (*num2).num.complexNumber.complexPart;
    }

    //first number complex, second is real
    if (!(*num1).isReal && (*num2).isReal)
    {
        (*solution).num.complexNumber.realPart = (*num1).num.complexNumber.realPart + (float)(*num2).num.realNumber;
        (*solution).num.complexNumber.complexPart = (*num1).num.complexNumber.complexPart;
    }
}

void sub(Number *num1, Number *num2, Number *solution)
{
    //both numbers are real
    if ((*num1).isReal && (*num2).isReal)
    {
        (*solution).isReal = TRUE;
        (*solution).num.realNumber = (*num1).num.realNumber - (*num2).num.realNumber;
        return;
    }

    (*solution).isReal = FALSE;

    //both numbers are complex
    if (!(*num1).isReal && !(*num2).isReal)
    {
        (*solution).num.complexNumber.realPart = (*num1).num.complexNumber.realPart - (*num2).num.complexNumber.realPart;
        (*solution).num.complexNumber.complexPart = (*num1).num.complexNumber.complexPart - (*num2).num.complexNumber.complexPart;
    }

    //first number real, second is complex
    if ((*num1).isReal && !(*num2).isReal)
    {
        (*solution).num.complexNumber.realPart = (float)(*num1).num.realNumber - (*num2).num.complexNumber.realPart;
        (*solution).num.complexNumber.complexPart = -(*num2).num.complexNumber.complexPart;
    }

    //first number complex, second is real
    if (!(*num1).isReal && (*num2).isReal)
    {
        (*solution).num.complexNumber.realPart = (*num1).num.complexNumber.realPart - (float)(*num2).num.realNumber;
        (*solution).num.complexNumber.complexPart = (*num1).num.complexNumber.complexPart;
    }
}

void div(Number *num1, Number *num2, Number *solution)
{
    //both numbers are real
    if ((*num1).isReal && (*num2).isReal)
    {
        (*solution).isReal = TRUE;
        (*solution).num.realNumber = (*num1).num.realNumber / (*num2).num.realNumber;
        return;
    }

    (*solution).isReal = FALSE;

    //both numbers are complex or first number real, second is complex
    if (!(*num1).isReal && !(*num2).isReal || (*num1).isReal && !(*num2).isReal)
    {
        Number conj, numer;
        Number *conjugent, *numerator;

        numer.isReal = FALSE;
        conj.isReal = FALSE;

        conjugent = &conj;
        numerator = &numer;

        float denominator;

        (*conjugent).num.complexNumber.realPart = (*num2).num.complexNumber.realPart;
        (*conjugent).num.complexNumber.complexPart = -(*num2).num.complexNumber.complexPart;

        denominator = (*num2).num.complexNumber.realPart * (*num2).num.complexNumber.realPart 
                      + (*num2).num.complexNumber.complexPart * (*num2).num.complexNumber.complexPart;

        mult(num1, conjugent, numerator);
        
        (*solution).num.complexNumber.realPart = (*numerator).num.complexNumber.realPart / denominator;
        (*solution).num.complexNumber.complexPart = (*numerator).num.complexNumber.complexPart / denominator;
    }

    //first number complex, second is real
    if (!(*num1).isReal && (*num2).isReal)
    {
        (*solution).num.complexNumber.realPart = (*num1).num.complexNumber.realPart / (float)(*num2).num.realNumber;
        (*solution).num.complexNumber.complexPart = (*num1).num.complexNumber.complexPart / (float)(*num2).num.realNumber;
    }
}

void mult(Number *num1, Number *num2, Number *solution)
{
    //both numbers are real
    if ((*num1).isReal && (*num2).isReal)
    {
        (*solution).isReal = TRUE;
        (*solution).num.realNumber = (*num1).num.realNumber * (*num2).num.realNumber;
        return;
    }

    (*solution).isReal = FALSE;

    //both numbers are complex
    if (!(*num1).isReal && !(*num2).isReal)
    {
        (*solution).num.complexNumber.realPart = (*num1).num.complexNumber.realPart * (*num2).num.complexNumber.realPart 
                    - (*num1).num.complexNumber.complexPart * (*num2).num.complexNumber.complexPart;

        (*solution).num.complexNumber.complexPart = (*num1).num.complexNumber.complexPart * (*num2).num.complexNumber.realPart 
                    + (*num1).num.complexNumber.realPart * (*num2).num.complexNumber.complexPart;
    }

    //first number real, second is complex
    if ((*num1).isReal && !(*num2).isReal)
    {
        (*solution).num.complexNumber.realPart = (float)(*num1).num.realNumber * (*num2).num.complexNumber.realPart;
        (*solution).num.complexNumber.complexPart = (float)(*num1).num.realNumber * (*num2).num.complexNumber.complexPart;
    }

    //first number complex, second is real
    if (!(*num1).isReal && (*num2).isReal)
    {
        (*solution).num.complexNumber.realPart = (*num1).num.complexNumber.realPart * (float)(*num2).num.realNumber;
        (*solution).num.complexNumber.complexPart = (*num1).num.complexNumber.complexPart * (float)(*num2).num.realNumber;
    }
}

void numberInput(Number *num)
{
    inputNumberType(num);
    
    if ((*num).isReal)
    {
        printf("Enter the number\n");

        scanf_s("%lf", &(*num).num.realNumber);
    }

    else if (!(*num).isReal)
    {
        printf("Enter the real part of the number\n");

        scanf_s("%f", &(*num).num.complexNumber.realPart);

        printf("Enter the complex part of the number\n");

        scanf_s("%f", &(*num).num.complexNumber.complexPart);
    }
}

void inputNumberType(Number *num)
{
    char numberTypeInput;

    int illegalInput = TRUE;

    while (illegalInput)
    {

        printf("Enter 'r' for real number input and 'c' for complex number input\n");

        scanf_s(" %c", &numberTypeInput, 1);

        if (numberTypeInput == 'r')
        {
            (*num).isReal = TRUE;
            illegalInput = FALSE;
        }

        else if (numberTypeInput == 'c')
        {
            (*num).isReal = FALSE;
            illegalInput = FALSE;
        }

        else
            printf("ERROR\nILLEGAL INPUT WAS ENTERED\n\n");
    }
}

char inputMathOp()
{
    char mathOp;

    printf("Enter a mathematical operator\n\n");

    printf("Enter '+' to add\nEnter '-' to subtract\nEnter '*' to multiply\nEnter '/' to divide\nEnter 'e' to exit\n");

    scanf_s(" %c", &mathOp, 1);

    return mathOp;
}