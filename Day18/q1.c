/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 18 Question: 35
 * Date : 09-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to print all factors of a given number.
 */

#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
