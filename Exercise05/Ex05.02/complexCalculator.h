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

/**
* @brief runs the main calculator function
*/
int mainCalculator();

/**
* @brief makes the calculation given a mathematical operator
* @param num1 a pointer to the first number
* @param num2 a pointer to the second number
* @param solution a pointer to the number where the solution will be saved
* @param mathOp the math operator for the current math problem
*/
void calculate(Number *num1, Number *num2, Number *solution, char mathOp);

/**
* @brief adds two number together and places the solution in 'solution'
* @param num1 a pointer to the first number
* @param num2 a pointer to the second number
* @param solution a pointer to the number where the solution will be saved
*/
void add(Number *num1, Number *num2, Number *solution);

/**
* @brief subtracts num2 from num1 and places the solution in 'solution'
* @param num1 a pointer to the first number
* @param num2 a pointer to the second number
* @param solution a pointer to the number where the solution will be saved
*/
void sub(Number *num1, Number *num2, Number *solution);

/**
* @brief divides two number and places the solution in 'solution'
* @param num1 a pointer to the first number
* @param num2 a pointer to the second number
* @param solution a pointer to the number where the solution will be saved
*/
void div(Number *num1, Number *num2, Number *solution);

/**
* @brief multiplies two number and places the solution in 'solution'
* @param num1 a pointer to the first number
* @param num2 a pointer to the second number
* @param solution a pointer to the number where the solution will be saved
*/
void mult(Number *num1, Number *num2, Number *solution);

/**
* @brief inputs a number to num with user prompts
* @param num pointer to a Number
*/
void numberInput(Number *num);

/**
* @brief inputs a number type to num with user prompts
* @param num pointer to a Number
*/
void inputNumberType(Number *num);

/**
* @brief inputs a math operator with user prompts
* @return the inputed math operator as a character
*/
char inputMathOp();

#endif