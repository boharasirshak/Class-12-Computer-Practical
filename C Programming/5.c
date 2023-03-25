// 5. WAP to find out the prime/composite number from the given n numbers.

#include <stdio.h>

#define MAX 1000

int is_prime(int a);

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
        if (is_prime(arr[i]))
            printf("%d is prime \n", arr[i]);
        else
            printf("%d is composite \n", arr[i]);
    }
}

int is_prime(int a)
{
    int count = 0;
    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
            count++;
    }
    if (count == 0)
        return 1;
    else
        return 0;
}