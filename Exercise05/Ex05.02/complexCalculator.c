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
            printf("= %lf\n\n", (*solution).realNumber);
        else
            printf("= (%f) + (%f)i\n\n", (*solution).complexNumber.realPart, (*solution).complexNumber.complexPart);

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
        (*solution).realNumber = (*num1).realNumber + (*num2).realNumber;
        return;
    }

    (*solution).isReal = FALSE;

    //both numbers are complex
    if (!(*num1).isReal && !(*num2).isReal)
    {
        (*solution).complexNumber.realPart = (*num1).complexNumber.realPart + (*num2).complexNumber.realPart;
        (*solution).complexNumber.complexPart = (*num1).complexNumber.complexPart + (*num2).complexNumber.complexPart;
    }

    //first number real, second is complex
    if ((*num1).isReal && !(*num2).isReal)
    {
        (*solution).complexNumber.realPart = (float)(*num1).realNumber + (*num2).complexNumber.realPart;
        (*solution).complexNumber.complexPart = (*num2).complexNumber.complexPart;
    }

    //first number complex, second is real
    if (!(*num1).isReal && (*num2).isReal)
    {
        (*solution).complexNumber.realPart = (*num1).complexNumber.realPart + (float)(*num2).realNumber;
        (*solution).complexNumber.complexPart = (*num1).complexNumber.complexPart;
    }
}

void sub(Number *num1, Number *num2, Number *solution)
{
    //code
}

void div(Number *num1, Number *num2, Number *solution)
{
    //code
}

void mult(Number *num1, Number *num2, Number *solution)
{
    //code
}

void numberInput(Number *num)
{
    inputNumberType(num);
    
    if ((*num).isReal)
    {
        printf("Enter the number\n");

        scanf_s("%lf", &(*num).realNumber);
    }

    else if (!(*num).isReal)
    {
        printf("Enter the real part of the number\n");

        scanf_s("%f", &(*num).complexNumber.realPart);

        printf("Enter the complex part of the number\n");

        scanf_s("%f", &(*num).complexNumber.complexPart);
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