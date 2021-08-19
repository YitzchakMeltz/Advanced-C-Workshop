#include "fibonacci.h"

ull_int getNthFibonacci(int n)
{
    return getNthFibonacciInnerFunc(n, 0, 1);
}

ull_int getNthFibonacciInnerFunc(int n, ull_int a, ull_int b)
{
    if (n == 0)
        return a;

    if (n == 1)
        return b;

    return getNthFibonacciInnerFunc(n - 1, b, a + b);
}