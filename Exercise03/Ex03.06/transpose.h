#define FALSE 0
#define TRUE 1

#define SYMMETRIC 1
#define SKEW_SYMMETRIC 2
#define NOT_SYMMETRIC 0

void swap(int* num1, int* num2);

int transposeMatrix(int** matrix, int dim);

int symmetric(int** matrix, int dim);

int skewSymmetric(int** matrix, int dim);