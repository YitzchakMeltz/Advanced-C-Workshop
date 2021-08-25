#ifndef COMPLEX_CALCULATOR_H
#define COMPLEX_CALCULATOR_H

#define TRUE 1
#define FALSE 0

#define EXIT 'e'

#include<stdbool.h>

typedef struct Complex_t
{
    float realPart;
    float complexPart;
}Complex;

typedef union NumericType_t
{
    Complex complexNumber;
    double realNumber;
}NumberType;

typedef struct Number_t
{
    NumberType num;
    int isReal;
}Number;

int mainCalculator();

void calculate(Number *num1, Number *num2, Number *solution, char mathOp);

void add(Number *num1, Number *num2, Number *solution);

void sub(Number *num1, Number *num2, Number *solution);

void div(Number *num1, Number *num2, Number *solution);

void mult(Number *num1, Number *num2, Number *solution);

void numberInput(Number *num);

void inputNumberType(Number *num);

char inputMathOp();

#endif