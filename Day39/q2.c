/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 39
 * Question : 78
 *
 * PROBLEM STATEMENT:
 * Find the sum of main diagonal elements for a square matrix.
 */

#include <stdio.h>

int main()
{
    int a[10][10], n, i, j;
    int sum = 0;

    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &j);

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }

    printf("%d\n", sum);

    return 0;
}
