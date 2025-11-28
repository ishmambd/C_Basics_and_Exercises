#include <stdio.h>

int isPrime(int n)
{
    int i;

    if (n < 2)
        return 0;   // not prime

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;   // divisible -not prime
        }
    }

    return 1;           // no divisors -prime
}

int main(void)
{
    int N = 0;
    int i = 0;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("Prime numbers from 2 to %d:\n", N);

    for (i = 2; i <= N; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
