// 8. WAP to find out the fibonacci series upto first 7th number.

#include <stdio.h>

void fibonacci(int n);

int main()
{
    fibonacci(7);
    return 0;
}

void fibonacci(int n)
{
    int first = 0;
    int last = 1;
    int fib;
    printf("%d %d ", first, last);

    for (int i = 0; i < n; i++)
    {
        fib = first + last;
        first = last;
        last = fib;
        printf("%d ", fib);    
    }
}