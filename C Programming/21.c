// 21.Write a C Program to Add two user input numbers using Pointers

#include <stdio.h>

int add(int *a, int *b)
{
    return *a + *b;
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int sum = add(&a, &b);
    printf("Sum of %d and %d is %d", a, b, sum);
    return 0;
}