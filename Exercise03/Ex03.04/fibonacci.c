#include "fibonacci.h"

static ull_int fibonacciArr[101] = { 0 };

ull_int getNthFibonacci(int n)
{
    // long long can not hold numbers bigger than the 93rd element from the series
    if (n > 93 || n == 0)
        return 0;

    // return previously calculated number if it was already calculated
    if (fibonacciArr[n] != 0)
        return fibonacciArr[n];

    fibonacciArr[n] = getNthFibonacciInnerFunc(n, 0, 1);

    return fibonacciArr[n];
}

ull_int getNthFibonacciInnerFunc(int n, ull_int a, ull_int b)
{
    if (n == 0)
        return a;

    if (n == 1)
        return b;

    return getNthFibonacciInnerFunc(n - 1, b, a + b);
}