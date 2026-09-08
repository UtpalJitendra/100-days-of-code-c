/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day : 19 Question: 37
 * Date : 09-09-2026
 *
 * PROBLEM STATEMENT:
 * Write a program to find the LCM of two numbers.
 */

#include <stdio.h>

int main()
{
    int a, b, max, lcm;

    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            lcm = max;
            break;
        }

        max++;
    }

    printf("%d\n", lcm);

    return 0;
}
