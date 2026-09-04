/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 14 Question: 28
 * Date : 05-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to print the product of even numbers
 * from 1 to n.
 */

#include <stdio.h>

int main()
{
    int n, i;
    int product = 1;

    scanf("%d", &n);

    for (i = 2; i <= n; i = i + 2)
    {
        product = product * i;
    }

    printf("%d\n", product);

    return 0;
}
