/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 15 Question: 29
 * Date : 05-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to calculate the factorial of a number.
 */

#include <stdio.h>

int main()
{
    int n, i;
    long long factorial = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("%lld\n", factorial);

    return 0;
}

