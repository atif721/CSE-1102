#include <stdio.h>

void primenum(int num)
{
    printf("Prime pairs whose sum is equal to %d:\n", num);
    for (int i = 2; i <= num /2; i++)
    {
        if (isPrime(i) && isPrime(num - i))
        {
            printf("(%d + %d)\n", i, num - i);
        }
    }
}

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    primenum(num);

    return 0;
}
