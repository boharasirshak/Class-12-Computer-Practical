// 3. WAP to swap out the value of two numbers using a user defined function.

#include <stdio.h>

void swap(int a, int b);

int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    swap(a, b);
    return 0;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("The swapped value of a is %d and the value of b is %d", a, b);
}