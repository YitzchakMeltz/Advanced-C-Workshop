#include "dog.h"

#include<string.h>

void sortByName(Dog dogsArr[], size_t arrSize)
{
    for (size_t index = 0; index < arrSize; ++index)
        for (size_t innerIndex = index; innerIndex < arrSize; ++innerIndex)
            if (strcmp(dogsArr[index].name, dogsArr[innerIndex].name) > 0)
                swap(dogsArr, index, innerIndex);
}

void sortBySize(Dog dogsArr[], size_t arrSize)
{
    for (size_t index = 0; index < arrSize; ++index)
        for (size_t innerIndex = index; innerIndex < arrSize; ++innerIndex)
            if (dogsArr[index].size > dogsArr[innerIndex].size)
                swap(dogsArr, index, innerIndex);
}

void swap(Dog dogsArr[], size_t index1, size_t index2)
{
    Dog temp;

    temp.name = dogsArr[index1].name;
    temp.size = dogsArr[index1].size;

    dogsArr[index1].name = dogsArr[index2].name;
    dogsArr[index1].size = dogsArr[index2].size;

    dogsArr[index2].name = temp.name;;
    dogsArr[index2].size = temp.size;;
}

void printDog(Dog d)
{
    printf("\n%s\n", d.name);
    printf("%d kg\n", d.size);
}