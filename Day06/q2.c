/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 06 Question: 2
 * Date : 03-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to input an integer and check whether
 * it is positive, negative or zero using nested if-else.
 */

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if (n >= 0)
    {
        if (n == 0)
        {
            printf("Zero\n");
        }
        else
        {
            printf("Positive\n");
        }
    }
    else
    {
        printf("Negative\n");
    }

    return 0;
}
