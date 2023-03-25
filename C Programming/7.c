// 7. WAP to find out the palindrome number.

#include<stdio.h>

int reverse(int num);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int rev = reverse(num);

    if (rev == num)
    {
        printf("%d is plaindrome \n", num);
    }
    else
    {
        printf("%d is not plaindrome \n", num);
    }
    return 0;
}

int reverse(int num)
{
    int rev = 0;
    while (num != 0)
    {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    return rev;
}