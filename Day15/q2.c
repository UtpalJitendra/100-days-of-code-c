/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 15 Question: 30
 * Date : 05-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to reverse a given number.
 */

#include <stdio.h>

int main()
{
    int n, reverse = 0, remainder;

    scanf("%d", &n);

    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    printf("%d\n", reverse);

    return 0;
}
