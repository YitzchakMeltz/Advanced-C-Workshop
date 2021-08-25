#ifndef DOG_H
#define DOG_H

#include<stdio.h>

typedef struct Dog_t
{
    char* name;
    size_t size;
}Dog;

/**
* @brief sort array of dogs in place by name using bubble sort
* @param dogsArr[] array of type Dog's
* @param arrSize size of the array
*/
void sortByName(Dog dogsArr[], size_t arrSize);

/**
* @brief sort array of dogs in place by weight using bubble sort
* @param dogsArr[] array of type Dog's
* @param arrSize size of the array
*/
void sortBySize(Dog dogsArr[], size_t arrSize);

/**
* @brief swaps two dogs in different locations in the array
* @param dogsArr[] array of type Dog's
* @param arrSize size of the array
*/
void swap(Dog dogsArr[], size_t index1, size_t index2);

/**
* @brief prints the dog info
* @param d dog to be printed
*/
void printDog(Dog d);

#endif