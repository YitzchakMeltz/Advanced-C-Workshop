#include "transpose.h"

void swap(int* num1, int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int transposeMatrix(int** matrix, int dim)
{
    for (int row = 0; row < dim; ++row)
    {
        for (int column = 0; column < row; ++column)
        {
            swap((((int*)matrix) + row * dim + column), (((int*)matrix) + row + column * dim));
        }
    }

    if (symmetric(matrix, dim))
        return SYMMETRIC;
    else if (skewSymmetric(matrix, dim))
        return SKEW_SYMMETRIC;

    return NOT_SYMMETRIC;
}

int symmetric(int** matrix, int dim)
{
    for (int row = 0; row < dim; ++row)
    {
        for (int column = 0; column < row; ++column)
        {
            if (*(((int*)matrix) + row * dim + column) != *(((int*)matrix) + row + column * dim))
                return FALSE;
        }
    }

    return TRUE;
}

int skewSymmetric(int** matrix, int dim)
{
    for (int row = 0; row < dim; ++row)
    {
        for (int column = 0; column < row; ++column)
        {
            if (*(((int*)matrix) + row * dim + column) != -*(((int*)matrix) + row + column * dim))
                return FALSE;
        }
    }

    return TRUE;
}