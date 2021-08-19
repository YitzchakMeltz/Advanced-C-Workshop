#include<stdio.h>
#include "fibonacci.h"

int main()
{

    // test the Fibonacci series function
    for(int index = 0; index < 93 ; ++index)
        printf("%lld ", getNthFibonacci(index));

    return 0;
}