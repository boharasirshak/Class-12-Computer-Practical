// 4. WAP to find out the odd/even number from the given n numbers.

#include <stdio.h>

#define MAX 1000

int is_even(int a);

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
        if (is_even(arr[i]))
            printf("%d is even \n", arr[i]);
        else
            printf("%d is odd \n", arr[i]);
    }
    
}

int is_even(int a)
{
    if (a % 2 == 0)
        return 1;
    else
        return 0;
}