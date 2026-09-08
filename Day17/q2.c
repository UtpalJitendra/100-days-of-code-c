/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 17 Question: 34
 * Date : 09-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to check if a number is prime.
 */

#include <stdio.h>

int main()
{
    int n, i, isPrime = 1;

    scanf("%d", &n);

    if (n <= 1)
    {
        isPrime = 0;
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not prime\n");
    }

    return 0;
}
