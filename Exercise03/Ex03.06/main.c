#include<stdio.h>
#include <stdlib.h>
#include "transpose.h"


int main()
{
    int dim;

    printf("Enter the matrix dimension\n");

    scanf_s("%d", &dim);

    //initialize a 2d matrix based on userInput
    int *matrix = (int*)malloc(sizeof(int) * dim * dim);

    printf("Enter the matrix elements\n");

    for (int row = 0; row < dim; ++row)
    {
        for (int col = 0; col < dim; ++col)
        {
            //check that (matrix + row * dim + col) isn't going to return NULL
            if (matrix + row * dim + col)
                scanf_s("%d", &*(matrix + row * dim + col));
        }

        printf("\n");
    }

    printf("Inputed matrix is:\n");

    printMatrix(matrix, dim);

    int matrixType = transposeMatrix(matrix, dim);

    if (matrixType == 1)
        printf("The inputed matrix is symmetrical");

    if (matrixType == 2)
        printf("The inputed matrix is skew-symmetrical");

    free(matrix);

    return 0;
}