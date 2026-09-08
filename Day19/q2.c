/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 19 Question: 38
 * Date : 09-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find the sum of digits of a number.
 */

#include <stdio.h>

int main()
{
    int n, sum = 0, remainder;

    scanf("%d", &n);

    while (n != 0)
    {
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }

    printf("%d\n", sum);

    return 0;
}
