#include<stdio.h>

#ifdef _DEBUG
#define TRACE_VAR(x) printf("Output");
#endif // DEBUG

int main(void)
{
    int x = 5;

    TRACE_VAR(x);

    return 0;
}