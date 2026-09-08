/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 17 Question: 33
 * Date : 09-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to check if a number is an Armstrong number.
 */

#include <stdio.h>

int main()
{
    int n, original, remainder, sum = 0;

    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        remainder = n % 10;
        sum = sum + (remainder * remainder * remainder);
        n = n / 10;
    }

    if (sum == original)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }

    return 0;
}
