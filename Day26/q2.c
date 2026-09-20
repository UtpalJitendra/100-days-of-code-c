/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 26
 * Question: 52
 *
 * PROBLEM STATEMENT:
 * Write a program to print the given star pattern.
 */

#include <stdio.h>

int main()
{
    int groups[] = {1, 3, 5, 3, 1};
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < groups[i]; j++)
        {
            printf("*\n");
        }

        printf("\n");
    }

    return 0;
}

