// 6. WAP to find out the factorial of a given n number.

#include <stdio.h>

#define MAX 1000

int factorial(int num);

int main()
{
    int n;
    int arr[MAX];

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int fact = factorial(arr[i]);
        printf("Factorial of %d is %d \n", arr[i], fact);
    }
    return 0;
}

int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}