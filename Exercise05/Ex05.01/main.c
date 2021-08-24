#include<stdio.h>
#include "dog.h"

int main(size_t argc, char *argv[])
{
    size_t ARR_SIZE = 6;

    Dog dogsArr[] = { {"B",63} , {"A",57} , {"C",92} , {"F",61} , {"AA",77} , {"FF",82} };

    for (size_t index = 0; index < ARR_SIZE; ++index)
        printDog(dogsArr[index]);

    sortByName(dogsArr, ARR_SIZE);

    printf("\n\nSorted by name:");

    for (size_t index = 0; index < ARR_SIZE; ++index)
        printDog(dogsArr[index]);

    sortBySize(dogsArr, ARR_SIZE);

    printf("\n\nSorted by size:");

    for (size_t index = 0; index < ARR_SIZE; ++index)
        printDog(dogsArr[index]);

    return 0;
}