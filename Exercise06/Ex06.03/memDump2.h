#ifndef MEM_DUMP2_H
#define MEM_DUMP2_H

#include<stdio.h>

/**
* @file Memory Dump Binary Function
*/


/**
* @brief Prints the binary representation of that variable from the given address
* @param address points to the address to print
* @param addressSize contains the size of the data (bytes) stored at the memory address
*/
void PrintBin(void* address, size_t addressSize);

/**
* @brief Converts a Hexaadecimal digit to a Binary Digit
* @param hexDigit hexadecimal digit to convert
* @return a corresponding string of binary to hexadecimal digit
*/
const char *ConvertHexToBin(char hexDigit);

/*
* @brief converts a hexadecimal digit to it's decimal value
* @param c hexadecimal digit to convert
* @return the hexadecimal digit's corresponding decimal value
*/
int CharToDec(char c);

#endif