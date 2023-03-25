// WAP to find out the sum of two numbers using the pointer

#include <stdio.h>

int add(int *a, int *b);

int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    int sum = add(&a, &b);
    printf("Sum of %d and %d is %d", a, b, sum);
}

int add(int *a, int *b)
{
    int sum = *a + *b;
    return sum;
}