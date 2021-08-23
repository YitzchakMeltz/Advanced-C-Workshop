#include "transpose.h"

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void transposeMatrix(int **matrix, int dim)
{
    for (int row = 0; row < dim; ++row)
    {
        for (int column = 0; column < row; ++column)
        {
            swap((((int*)matrix) + row * dim + column), (((int*)matrix) + row + column * dim));
        }
    }
}