#define FALSE 0
#define TRUE 1

#define SYMMETRIC 1
#define SKEW_SYMMETRIC 2
#define NOT_SYMMETRIC 0


/**
* @brief Swaps two numbers
* @param num1 receives a pointer to the first integer
* @param num2 receives a pointer to the second integer
*/
void swap(int *num1, int *num2);

/**
* @brief replaces a matrix with it's transpose
* @param matrix receives a 2 dimensional nxn array
* @param dim receives the dimension of the array
*/
int transposeMatrix(int **matrix, int dim);

/**
* @brief checks whether a matrix is symmetric or not
* @param matrix receives a 2 dimensional nxn array
* @param dim receives the dimension of the array
* @return 1 if the matrix is symmetric and 0 if it is not
*/
int symmetric(int **matrix, int dim);

/**
* @brief checks whether a matrix is skew-symmetric or not
* @param matrix receives a 2 dimensional nxn array
* @param dim receives the dimension of the array
* @return 1 if the matrix is skew-symmetric and 0 if it is not
*/
int skewSymmetric(int **matrix, int dim);

/**
* @brief prints a matrix
* @param matrix receives a 2 dimensional nxn array
* @param dim receives the dimension of the array
*/
void printMatrix(int *matrix, int dim);