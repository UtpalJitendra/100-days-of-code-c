/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 21 Question :41
 * Date : 11-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to swap the first and last digit of a number.
 */

#include <stdio.h>

int main()
{
    int n, temp, first, last, divisor = 1, result;

    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }

    first = temp;

    result = n - (first * divisor) - last;
    result = result + (last * divisor) + first;

    printf("%d\n", result);

    return 0;
}
