/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 37
 * Question : 73
 *
 * PROBLEM STATEMENT:
 * Find the sum of each row of a matrix and store it in an array.
 */

#include <stdio.h>

int main()
{
    int r, c;
    
    scanf("%d %d", &r, &c);

    int matrix[r][c];
    int sum[r];

    for (int i = 0; i < r; i++)
    {
        sum[i] = 0;

        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
            sum[i] += matrix[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}
