#ifndef MEM_DUMP_H
#define MEM_DUMP_H

#include<stdio.h>

/**
* @file Memory Dump Hexadecimal Function
*/


/**
* @brief Prints the hexadecimal representation of that variable from the given address
* @param address points to the address to print
* @param addressSize contains the size of the data (bytes) stored at the memory address
*/
void PrintHex(void *address, size_t addressSize);

#endif