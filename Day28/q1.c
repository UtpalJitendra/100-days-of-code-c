/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 28
 * Question: 55
 *
 * PROBLEM STATEMENT:
 * Write a program to print all the prime numbers
 * from 1 to n.
 */

#include <stdio.h>

int main()
{
    int n, i, j, isPrime;

    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        isPrime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
