/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 24 Question: 48
 * Date : 16-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to print the following pattern:
 * 1
 * 12
 * 123
 * 1234
 * 12345
 */

#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
