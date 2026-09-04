/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 13 Question: 26
 * Date : 05-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to print numbers from 1 to n.
 */

#include <stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d", i);

        if (i < n)
        {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}


