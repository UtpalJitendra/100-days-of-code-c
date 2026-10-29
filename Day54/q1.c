/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 54
 * Question : 104
 *
 * PROBLEM STATEMENT:
 * Find the pivot integer x such that the sum of all
 * integers from 1 to x equals the sum of all integers
 * from x to n. Print -1 if no such integer exists.
 */

#include <stdio.h>

int main()
{
    int n, x;
    int leftSum, rightSum;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (x = 1; x <= n; x++)
    {
        leftSum = x * (x + 1) / 2;
        rightSum = n * (n + 1) / 2
                   - (x - 1) * x / 2;

        if (leftSum == rightSum)
        {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");

    return 0;
}
