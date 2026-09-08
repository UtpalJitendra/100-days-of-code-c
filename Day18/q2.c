/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 18 Question: 36
 * Date : 09-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find the HCF (GCD) of two numbers.
 */

#include <stdio.h>

int main()
{
    int a, b, i, hcf = 1;

    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }

    printf("%d\n", hcf);

    return 0;
}
