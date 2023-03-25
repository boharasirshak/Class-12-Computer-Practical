// 1. WAP to add two numbers using a user defined function.

#include <stdio.h>

int add(int a, int b);

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int sum = add(a, b);
    printf("Sum of %d and %d is %d", a, b, sum);
    return 0;
}

int add(int a, int b)
{
    int sum = a + b;
    return sum;
}