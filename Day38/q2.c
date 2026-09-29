/*
 * Name : Utpal Jitendra
 * Roll : 590041777
 * Day  : 38
 * Question : 76
 *
 * PROBLEM STATEMENT:
 * Check if a matrix is symmetric.
 */

#include <stdio.h>

int main()
{
    int r, c;
    int symmetric = 1;

    scanf("%d %d", &r, &c);

    int matrix[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (r != c)
    {
        symmetric = 0;
    }
    else
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (matrix[i][j] != matrix[j][i])
                {
                    symmetric = 0;
                    break;
                }
            }

            if (symmetric == 0)
                break;
        }
    }

    if (symmetric)
        printf("True");
    else
        printf("False");

    return 0;
}
