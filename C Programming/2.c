// 2. WAP to find out the area of a square using a recursive function.

#include <stdio.h>

int power(int a, int b);

int main()
{
    int side;
    printf("Enter the side of the square: ");
    scanf("%d", &side);
    int a = power(side, 2);
    printf("Area of the square is %d", a);
    return 0;
}

int power(int a, int b)
{
    if (b == 0)
        return 1;
    else
        return a * power(a, b - 1);
}