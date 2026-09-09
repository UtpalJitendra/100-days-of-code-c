/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 20 Question: 39
 * Date : 10-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find the product of odd digits of a number.
 */

#include <stdio.h>

int main()
{
    int n, digit, product = 1;

    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;

        if (digit % 2 != 0)
        {
            product = product * digit;
        }

        n = n / 10;
    }

    printf("%d\n", product);

    return 0;
}
