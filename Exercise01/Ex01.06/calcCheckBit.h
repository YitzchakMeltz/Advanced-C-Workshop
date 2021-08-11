#ifndef CALC_CHECK_BIT_H
#define CALC_CHECK_BIT_H

/**
* @brief Calculates the check bit for an Israeli ID number
* @param id is a 8digit ID Number (without the check bit)
* @return the check bit
*/
int calcCheckBit(int id);

/**
* @brief Sums the numbers while doubling every other number
* @param num is an integer number
* @return a sum according to above specifications
*/
int sumOfNumbers(int num);

/**
* @brief Calculates how many digits an intger has
* @param num is an integer number
* @return amount of digits in the number
*/
int numLength(int num);

/**
* @brief Combines two digit numbers to a one digit number (by adding them together)
* @param num is a 2 digit number
* @return 1 digit number
*/
int combineDigits(int num);

#endif