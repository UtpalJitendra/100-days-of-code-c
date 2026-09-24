/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 32 Question: 64
 * Date : 24-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find the digit that occurs the most times
 * in an integer number.
 */


#include <stdio.h>

int main(void)
{
    int n, digit;
    int count[10] = {0};
    int max = 0, result = 0;

    scanf("%d", &n);

    if (n == 0)
    {
        printf("0\n");
        return 0;
    }

#include <stdio.h>

int main(void)
{
    int n, digit;
    int count[10] = {0};
    int max = 0, result = 0;

    scanf("%d", &n);

    if (n == 0)
    {
        printf("0\n");
        return 0;
    }

    while (n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (digit = 0; digit <= 9; digit++)
    {
        if (count[digit] > max)
        {
            max = count[digit];
            result = digit;
        }
    }

    printf("%d\n", result);

    return 0;
}
    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (digit = 0; digit <= 9; digit++)
    {
        if (count[digit] > max)
        {
            max = count[digit];
            result = digit;
        }
    }

    printf("%d\n", result);

    return 0;
}
