
typedef unsigned long long ull_int;


/**
* @brief Sends n to an inner function to calculate the nth number in the Fibonacci series
* @param int n element number to be returned from the Fibonacci series
* @return nth number in the Fibonacci series as an unsigned long long int
*/
ull_int getNthFibonacci(int n);

/**
* @brief Calculates the nth number in the Fibonacci series using lazy evaluation
* @param int n element number to be returned from the Fibonacci series
* @param a first number to be added up for the next Fibonacci element
* @param b second number to be added up for the next Fibonacci element
* @return nth number in the Fibonacci series as an unsigned long long int
*/
ull_int getNthFibonacciInnerFunc(int n, ull_int a, ull_int b);