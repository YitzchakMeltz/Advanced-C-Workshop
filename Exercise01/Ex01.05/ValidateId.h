#ifndef VALIDATE_ID_H
#define VALIDATE_ID_H

#include<stdio.h>

/**
* @brief Checks whether an ID is a valid ID based on the check bit
* @param id an ID number
* @return True if the ID is valid, False if the ID is not a valid ID
*/
int checkIDValidity(int id);

/**
* @brief Calculates the amount of digits that are in the integer number
* @param num an integer number
* @return amount of digits in the number
*/
int numLength(int num);

#endif