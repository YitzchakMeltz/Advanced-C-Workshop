#include<stdio.h>
#include <stdlib.h>
#include "transpose.h"

int main()
{

    int matrix[2][2] = { { 1,2 } , {3, 4} };

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    transposeMatrix(matrix, 2);
    printf("\n");

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}