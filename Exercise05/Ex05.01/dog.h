#ifndef DOG_H
#define DOG_H

#include<stdio.h>

typedef struct Dog_t
{
    char* name;
    size_t size;
}Dog;

void sortByName(Dog dogsArr[], size_t arrSize);

void sortBySize(Dog dogsArr[], size_t arrSize);

void swap(Dog dogsArr[], size_t index1, size_t index2);

void printDog(Dog d);

#endif